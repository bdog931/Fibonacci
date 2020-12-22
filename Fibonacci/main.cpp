/** Brandon Harrell, main.cpp, October 19, 2020, Main File **/

#include <iostream>
#include <string>
#include "Executive.h"

int main(int argc, char* argv[])
{
	std::string flag = "";
	std::string userNum = "";

	if (argc < 3)
	{
		std::cout << "You have not provided enough instructions. Valid instruction take the form of an integer and then either '-v' or '-i'";
		std::cout << " e.g. '5 -v'." << std::endl;
	}
	else
	{
		flag = argv[1];
		userNum = argv[2];

		Executive exec(flag, userNum);
		exec.run();
	}
	return(0);
}