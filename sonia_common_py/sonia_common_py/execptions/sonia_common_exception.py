"""
Sonia Commons Base Exception.
"""

from .exception_codes import SoniaCommonExceptionCodes

class SoniaCommonException(Exception):
    """
    Exception type for Sonia Common.
    """

    def __init__(self, exception_code: SoniaCommonExceptionCodes) -> None:
        super().__init__(f"{exception_code.name}")