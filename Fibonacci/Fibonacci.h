/** Brandon Harrell, Fibonacci.h, October 19, 2020, Fibonacci Class Declaration File **/

#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <string>
#include <iostream>

class Fibonacci
{
private:
	int m_num;
	int m_smallerTerm;
	int m_largerTerm;
	int m_AFibTerm;
	int m_counter;

public:

	/***
	* Pre None
	* Post Member Variables Initialized
	* Param 1 string by reference
	* Exceptions None
	***/

	Fibonacci(std::string& userNum);

	/***
	* Pre Fibonacci object has been created
	* Post Prints to console the ith term in the Fibonacci Sequence
	* Param None
	* Exceptions None
	***/

	void FibTerm();

	/***
	* Pre Fibonacci Object has been created
	* Post A sentence indicated whether or not that number is in the Fibonacci Sequence (obtained from string)
	* Param None
	* Exceptions None
	***/

	void isAFib();
};

#endif

