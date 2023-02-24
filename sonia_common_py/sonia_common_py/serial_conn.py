"""
This module allows us to connect to Serial Devices in python.
"""
__all__ = ['SerialConn']

import fcntl
import os
import termios
from enum import Enum
from fcntl import fcntl
from termios import tcgetattr, tcsetattr
from typing import Union, List
from .execptions.exception_codes import SoniaCommonExceptionCodes
from .execptions.sonia_common_exception import SoniaCommonException

class SerialConn:
    """
    Serial port connection Manager.
    """

    BUFFER_SIZE: int = 1024
    """Size of a packet."""

    class __TermiosFlags(Enum):
        I_FLAG = 0
        O_FLAG = 1
        C_FLAG = 2
        L_FLAG = 3
        I_SPEED = 4
        O_SPEED = 5
        CC = 6

    def __init__(self, port: str, baud: int, is_blocking: bool = True) -> None:
        """
        Constructor.

        Args:
            port (str): COMX or tty/ depending on platform
            baud (int): baud rate. Use constants from termios module.
            is_blocking (bool, optional): Is the port connection blocking. Defaults to True.

        Raises:
            SoniaCommonException: Bad Baud rate.
        """
        self.__port = port
        if self.__check_baud(self.__check_baud(baud)):
            self.__baud = baud
        else:
            raise SoniaCommonException(SoniaCommonExceptionCodes.BAD_BAUD_RATE)
        self.__is_blocking = is_blocking
        self.__fd = None
        self.__options: List[int | list[bytes | int]] = None

    def __del__(self) -> None:
        """Destructor."""
        os.close(self.__fd)

    def read_packets(self, count: int, data: bytearray) -> int:
        """
        Read packets from the serial port.

        Args:
            count (int): number of packets of size BUFFER_SIZE.
            data (bytearray): Empty array that will be filled with the data from the port.

        Returns:
            int: 0 if successful else error code.
        """
        data = os.read(self.__fd, count * self.BUFFER_SIZE)
        return self.__validate_read(data, count)

    def read_once(self, data: bytearray, append: bool = False) -> int:
        """
        Read one packet of BUFFER_SIZE from the port.

        Args:
            data (bytearray): empty byte array to be filled.
            append (bool, optional): Append to existing data or override. Defaults to False.

        Returns:
            int: 0 for success else error code.
        """
        old_len = len(data) / self.BUFFER_SIZE
        if append:
            data.append(os.read(self.__fd, self.BUFFER_SIZE))
            return self.__validate_read(data, old_len + 1)

        data = os.read(self.__fd, self.BUFFER_SIZE)
        return self.__validate_read(data, old_len + 1)

    def flush(self) -> None:
        """
        Flush the port's IO stream.
        """
        termios.tcflush(self.__fd, termios.TCIOFLUSH)

    def transmit(self, data: Union[str, bytearray]) -> int:
        """
        Write to the port.

        Args:
            data (Union[str, bytearray]): Message to send.

        Returns:
            int: 0 for success else error code.
        """
        return os.write(self.__fd, data)

    def open_port(self) -> bool:
        """
        Open the port.

        Returns:
            bool: True for success else False.
        """
        if self.__is_blocking:
            self.__fd = os.open(self.__port, os.O_RDWR | os.O_NOCTTY)
        else:
            self.__fd = os.open(self.__port, os.O_RDWR |
                                os.O_NOCTTY | os.O_NDELAY)

        if self.__fd == -1:
            return False

        if not self.__is_blocking:
            fcntl(self.__fd, fcntl.F_SETFL, os.O_NDELAY)

        self.__options = tcgetattr(self.__fd)
        self.__options[self.__TermiosFlags.I_SPEED] = self.__baud
        self.__options[self.__TermiosFlags.O_SPEED] = self.__baud

        self.__options[self.__TermiosFlags.C_FLAG] |= (
            termios.CLOCAL | termios.CREAD)
        self.__options[self.__TermiosFlags.C_FLAG] &= ~termios.CSIZE
        self.__options[self.__TermiosFlags.C_FLAG] |= termios.CS8

        self.__options[self.__TermiosFlags.C_FLAG] &= ~(
            termios.PARENB | termios.PARODD)
        self.__options[self.__TermiosFlags.C_FLAG] &= ~termios.CSTOP
        self.__options[self.__TermiosFlags.C_FLAG] &= ~termios.CRTSCTS

        self.__options[self.__TermiosFlags.I_FLAG] &= ~termios.IGNBRK
        self.__options[self.__TermiosFlags.I_FLAG] &= ~(
            termios.IXON | termios.IXOFF | termios.IXANY)

        self.__options[self.__TermiosFlags.L_FLAG] = 0

        self.__options[self.__TermiosFlags.O_FLAG] = 0

        tcsetattr(self.__fd, termios.TCSANOW, self.__options)

        return True

    def __validate_read(self, data, count) -> int:
        if data is None:
            return -1
        if len(data < count * self.BUFFER_SIZE):
            return 1
        return 0

    @staticmethod
    def __check_baud(baud: int) -> bool:
        return baud in [
            eval(f"termios.{x}") for x in dir(termios) if x[0] == 'B' and x[1].isnumeric() #pylint: disable=eval-used
            ]
