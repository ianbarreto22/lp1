#ifndef W5N_DATE_H
#define W5N_DATE_H

#include <string>

struct Date
{
    Date();
    unsigned year;
    unsigned month;
    unsigned day;

    void set_from_string(const std::string& date);
    std::string to_string();
};
#endif
