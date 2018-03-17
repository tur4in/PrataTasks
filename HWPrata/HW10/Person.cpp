#include "stdafx.h"
#include "Person.h"
#include <iostream>

CPerson::CPerson(const std::string & ln, const char * fn)
{
	lname = ln;
	int indexOfChar = 0;
	while (fn[indexOfChar] != '\0')
	{
		fname[indexOfChar] = fn[indexOfChar];
		++indexOfChar;
	}
	fname[indexOfChar] = '\0';
}

void CPerson::Show() const
{
	std::cout << lname << " " << fname << std::endl;
}

void CPerson::FormalShow() const
{
	std::cout << fname << " " << lname << std::endl;
}


