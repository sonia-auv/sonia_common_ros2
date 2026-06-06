import serial
from queue import Queue
from threading import Thread
from typing import Optional, NamedTuple, Union, List


SerialData = NamedTuple('SerialData', id=int, size=int, msg=List[Union[bytes, bytearray]])

class SerialInterface:
    """
    Serial Interface to communicate with a serial port in full duplex.
    """

    def __init__(self, port: str, baud: int) -> None:
        """
        Constructor for SerialInterface.

        Args:
            port (str): port to connect to.
            baud (int): Baudrate for the connection.
        """ 
        try:
            self.__serial = serial.Serial(port, baudrate=baud)
        except Exception as ex:
            print("".join(ex.args))
            raise Exception()
        self.__input_buffer = Queue()
        self.__data_in_queue = Queue()
        self.__is_alive = True
        self.__read_thread: Optional[Thread] = None
        self.__parse_thread: Optional[Thread] = None

    @property
    def data_in_queue(self) -> Queue:
        """
        Getter for the data-in Queue

        Returns:
            Queue: Queue with the received data.
        """
        return self.__data_in_queue

    def start(self) -> None:
        """
        Start the serial interface. This starts both the read and parse threads.
        """
        self.__read_thread = Thread(target=self.__read_worker, daemon=True)
        self.__parse_thread = Thread(target=self.__parse_worker, daemon=True)
        self.__read_thread.start()
        self.__parse_thread.start()

    def stop(self):
        """
        Stop all threads.
        """
        self.__is_alive = False
        self.__serial.cancel_read()
        self.__serial.close()

    def transmit(self, data: SerialData) -> bool:
        """
        Transmit data to the port.

        Args:
            data (SerialData): The Data to send.
        """
        tram = []
        tram.append(data.id.to_bytes(1, 'big'))
        tram.append(data.size.to_bytes(1, 'big'))
        for i in range(data.size):
            tram.append(data.msg[i])
        try:
            self.__serial.writelines(tram)
            return True
        except serial.SerialException as ex:
            print("".join(ex.args))
            return False

    def __read_worker(self):
        while self.__is_alive:
            try:
                self.__input_buffer.put(self.__serial.read())
            except TypeError:
                pass

    def __parse_worker(self):
        while self.__is_alive:
            self.__data_in_queue.put(self.__build_msg())

    def __build_msg(self) -> SerialData:
        id_ = int.from_bytes(self.__input_buffer.get(), 'big')
        size = int.from_bytes(self.__input_buffer.get(), 'big')
        msg = []
        for _ in range(size):
            msg.append(self.__input_buffer.get())
        return SerialData(id=id_, size=size, msg=msg)
        