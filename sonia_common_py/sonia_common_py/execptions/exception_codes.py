"""
Defined Exception Codes for Sonia Common
"""

__all__ = ['SoniaCommonExceptionCodes']

from enum import Enum, auto

class SoniaCommonExceptionCodes(Enum):
    """
    Enum of Exception Codes for the Sonia Common Exception.
    """

    BAD_BAUD_RATE = auto()
    """
    Bad Baud rate

    Usually caused because termios lib was not used.
    """

    @staticmethod
    def _generate_next_value_(name, start, count, last_values):
        return count + 1
