/** Brandon Harrell, Fibonacci.cpp, October 19, 2020, Fibonacci Class Implementation File **/

#include "Fibonacci.h"

Fibonacci::Fibonacci(std::string& userNum)
{
	m_num = stoi(userNum);
	m_smallerTerm = 0;
	m_largerTerm = 1;
	m_AFibTerm = 0;
	m_counter = -1;
}

void Fibonacci::FibTerm()
{
	m_counter = m_counter + 1;
	if (m_num == m_counter)
	{
		std::cout << "The " << m_num << "th term of the Fibonacci Sequence is " << m_smallerTerm << std::endl;
		return;
	}
	m_AFibTerm = m_largerTerm + m_smallerTerm;
	m_smallerTerm = m_largerTerm;
	m_largerTerm = m_AFibTerm;
	FibTerm();
}
void Fibonacci::isAFib()
{
	if (m_num == 0)
	{
		std::cout << m_num << " is indeed a term in the Fibonacci Sequence. " << std::endl;
		return;
	}
	m_AFibTerm = m_largerTerm + m_smallerTerm;
	m_smallerTerm = m_largerTerm;
	m_largerTerm = m_AFibTerm;
	if (m_num == m_AFibTerm)
	{
		std::cout << m_num << " is indeed a term in the Fibonacci Sequence. " << std::endl;
		return;
	}
	else if (m_smallerTerm > m_num)
	{
		std::cout << m_num << " is not a term in the Fibonacci Sequence." << std::endl;
		return;
	}
	else if (m_num != m_AFibTerm)
	{
		isAFib();
	}
}
