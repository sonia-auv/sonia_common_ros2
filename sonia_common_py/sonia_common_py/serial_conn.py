r"""
\file	SerialConnection.h
\author	Nimai Jariwala
\date	21/01/2023

\copyright Copyright (c) 2021 S.O.N.I.A. All rights reserved.

\section LICENSE

This file is part of S.O.N.I.A. software.

S.O.N.I.A. software is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

S.O.N.I.A. software is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with S.O.N.I.A. software. If not, see <http://www.gnu.org/licenses/>.
"""

from enum import Enum
from typing import Union
import os
import fcntl
from fcntl import fcntl
import termios
from termios import tcgetattr, tcsetattr


class SerialConn:

    BUFFER_SIZE : int = 1024
    
    class _TermiosFlags(Enum):
        I_FLAG = 0
        O_FLAG = 1
        C_FLAG = 2
        L_FLAG = 3
        I_SPEED = 4
        O_SPEED = 5
        CC = 6

    def __init__(self, port: str, baud: int, is_blocking: bool = True) -> None:
        self._port = port
        if self._check_baud(self._check_baud(baud)):
            self._baud = baud
        else:
            raise Exception("Invalid Baud")
        self._is_blocking = is_blocking
        self._fd = None
        self._options: termios._Attr = None

    def __del__(self) -> None:
        os.close(self._fd)

    def read_packets(self, count: int, data: bytearray) -> int:
        data = os.read(self._fd, count * self.BUFFER_SIZE)
        return self._validate_read(data, count)

    def read_once(self, data: bytearray, append: bool = False) -> int:
        old_len = len(data) / self.BUFFER_SIZE
        if append:
            data.append(os.read(self._fd, self.BUFFER_SIZE))
            return self._validate_read(data, old_len + 1)
        
        data = os.read(self._fd, self.BUFFER_SIZE)
        return self._validate_read(data, old_len + 1)

    def flush(self) -> None:
        termios.tcflush(self._fd, termios.TCIOFLUSH)

    def transmit(self, data: Union[str, bytearray]) -> int:
        return os.write(self._fd, data)

    def open_port(self) -> bool:
        if self._is_blocking:
            self._fd = os.open(self._port, os.O_RDWR | os.O_NOCTTY)
        else:
            self._fd = os.open(self._port, os.O_RDWR | os.O_NOCTTY | os.O_NDELAY)

        if self._fd == -1:
            return False
        
        if not self._is_blocking:
            fcntl(self._fd, fcntl.F_SETFL, os.O_NDELAY)
        
        self._options = tcgetattr(self._fd)
        self._options[self._TermiosFlags.I_SPEED] = self._baud
        self._options[self._TermiosFlags.O_SPEED] = self._baud

        self._options[self._TermiosFlags.C_FLAG] |= (termios.CLOCAL | termios.CREAD)
        self._options[self._TermiosFlags.C_FLAG] &= ~termios.CSIZE
        self._options[self._TermiosFlags.C_FLAG] |= termios.CS8

        self._options[self._TermiosFlags.C_FLAG] &= ~(termios.PARENB | termios.PARODD)
        self._options[self._TermiosFlags.C_FLAG] &= ~termios.CSTOP
        self._options[self._TermiosFlags.C_FLAG] &= ~termios.CRTSCTS

        self._options[self._TermiosFlags.I_FLAG] &= ~termios.IGNBRK
        self._options[self._TermiosFlags.I_FLAG] &= ~(termios.IXON | termios.IXOFF | termios.IXANY)

        self._options[self._TermiosFlags.L_FLAG] = 0
        
        self._options[self._TermiosFlags.O_FLAG] = 0

        tcsetattr(self._fd, termios.TCSANOW, self._options)
        
        return True

    def _validate_read(self, data, count) -> int:
        if len(data < count * self.BUFFER_SIZE):
            return 1
        elif data is None:
            return -1
        return 0


    @staticmethod
    def _check_baud(baud: int) -> bool:
        return baud in [eval(f"termios.{x}") for x in dir(termios) if x[0] == 'B' and x[1].isnumeric()]

    




