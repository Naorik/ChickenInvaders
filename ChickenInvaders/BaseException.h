/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include <exception>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////// Documentation //////////////////////////////////////
/*
	The class is the base class of the game Exception
*/

/////////////////////////////////////////////////////////////////////////////////////////

class BaseException : public std::exception {

public:
	BaseException(std::string);
	const char* what() const = 0;

protected:
	std::string m_errorMsg;
};
