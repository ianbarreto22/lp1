#include "Date.h"

#include <sstream>
#include <string>

Date::Date() : year(0), month(0), day(0)
{
}

void Date::set_from_string(const std::string& date)
{

	std::stringstream stream(date);
	char discard;

	stream >> day;
	stream >> discard;
	stream >> month;
	stream >> discard;
	stream >> year;

}

std::string Date::to_string()
{
	std::string date;
	std::stringstream stream(date);

	if(day<10)
	{
		stream << "0";
	}

	stream << day << "/";

	if(month<10)
	{
		stream << "0";
	}

	stream << month << "/" << year;

	date = stream.str();

	return date;
}