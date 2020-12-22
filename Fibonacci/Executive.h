/** Brandon Harrell, Executive.h, October 19, 2020, Executive Class Declaration File **/

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include<string>
#include <iostream>
#include "Fibonacci.h"

class Executive
{
private:
	std::string m_flag;
	std::string m_userNum;

public:

	/***
	* Pre Executive Header File Must be included
	* Post member variables initialized
	* Param 2 strings by reference
	* Exceptions None
	***/

	Executive(std::string& flag, std::string& userNum);


	/***
	* Pre Executive Object must exist
	* Post Fibonacci Class has been called
	* Param None
	* Exceptions None
	***/

	void run();
};

#endif

