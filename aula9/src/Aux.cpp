#include "Aux.h"

#include <string>
#include <ctime>
#include <fstream>


std::string format_current_date(const std::string &format) {
  std::time_t time = std::time(nullptr);
  char result[1024];

  std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

  return std::string(result);
}

std::string get_current_date() { return format_current_date("%d/%m/%Y"); }

std::string get_current_time() { return format_current_date("%H:%M:%S"); }

bool date_checker(Date date, std::string filename)
{
	std::ifstream diary_input(filename);
	std::string line;
	std::string aux = "# " + date.to_string();

	while(!diary_input.eof())
	{
		std::getline(diary_input, line);
		if(line == aux)
		{
			return 0;
		}
	}

	diary_input.close();
	return 1;
}