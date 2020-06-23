#ifndef W5N_MESSAGE_H
#define W5N_MESSAGE_H

#include "Date.h"
#include "Time.h"

#include <string>

struct Message
{
    std::string content;
    Date date;
    Time time;
};
#endif
