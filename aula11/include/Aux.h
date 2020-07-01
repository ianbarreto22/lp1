#ifndef AUX_H
#define AUX_H

#include <string>
#include <iostream>

#include "Date.h"

std::string format_current_date(const std::string &format);

std::string get_current_date();

std::string get_current_time();

bool date_checker(Date date, std::string filename);

#endif