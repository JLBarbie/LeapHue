#include "Utils.h"

void log(MessageType type, std::string message)
{
    switch ( type ) {
        case DEBUG:
        case INFO:
        case WARNING:
        case FATAL:
            std::cout << message << std::endl;
    }
}
