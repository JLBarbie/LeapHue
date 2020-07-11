#pragma once
#ifndef UTILS_H
#define UTILS_H

#include <iostream>

enum MessageType
{
    DEBUG,
    INFO,
    WARNING,
    FATAL
};

void log(MessageType type, std::string message);

#endif /* end of include guard: UTILS_H */
