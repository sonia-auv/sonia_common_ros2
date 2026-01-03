# options for state
uint8 STATE_STOPPED = 0
uint8 STATE_INITIALIZING = 1 
uint8 STATE_RUNNING = 2
uint8 STATE_IDLE = 3

# options for quality
uint8 Q_UNKNOWN = 0
uint8 Q_OK = 1
uint8 Q_WARN = 2
uint8 Q_ERROR = 3

builtin_interfaces/Time stamp
uint8 state
uint8 quality
string node_name