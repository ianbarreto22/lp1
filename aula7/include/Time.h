#ifndef W5N_TIME_H
#define W5N_TIME_H

#include <string>

struct Time
{
    unsigned hour;
    unsigned minute;
    unsigned second;

    void set_from_string(const std::string& time);
};
#endif
