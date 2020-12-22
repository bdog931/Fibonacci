/** Brandon Harrell, Executive.cpp October 19, 2020, Executive Class Implementation File **/

#include "Executive.h"

Executive::Executive(std::string& flag, std::string& userNum)
{
	m_flag = flag;
	m_userNum = userNum;
}

void Executive::run()
{
	Fibonacci myFibonacci(m_userNum);
	if (m_flag == "-v")
	{
		myFibonacci.isAFib();
	}
	else if (m_flag == "-i")
	{
		myFibonacci.FibTerm();
	}
	else
	{
		std::cout << "You have not passed in a valid flag. Valid flags are: '-v' or '-i'.";
		std::cout << std::endl;
	}
}
