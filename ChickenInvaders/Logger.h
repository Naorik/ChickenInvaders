
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <fstream>

/////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////// Documentation //////////////////////////////////////
/*
The class will write the errors and failures of the program to a file called logger.txt.
*/

/////////////////////////////////////////////////////////////////////////////////////////
class Logger {

public:
	Logger();
	~Logger();
	static Logger & instance();
	void Write(std::string&);

private:
	Logger(const Logger &) = delete;
	Logger & operator = (const Logger &) = delete;
	std::ofstream _log;
};
