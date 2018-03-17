#include "stdafx.h"
#include "Golf.h"
#include <iostream>

char* cutTheString(const char* input)
{
	int charIndex = 0;
	while (*input != '&')
	{
		++charIndex;
		++input;
	}
	char* result = new char[charIndex];
	for (int i = 0; i < charIndex; ++i)
	{
		result[i] = (input - charIndex + i)[i];
		--input;
	}
	return result;
}

CGolf::CGolf(const char * name, int hc)
{
	handicap = hc;
	int charIndex = 0;
	while (*name != '\0')
	{
		fullname[charIndex] = *name;
		++charIndex;
		++name;
	}
	fullname[charIndex] = '&';
}

CGolf::CGolf(int hc)
{
	char* name = new char[Len];
	std::cout << "Enter the name:" << std::endl;
	std::cin >> name;
	if (*name == '\0')
		std::cout << "Enter smth" << std::endl;
	else
		*this = CGolf(name, hc);
}

CGolf::~CGolf()
{
	//delete fullname;
}

void CGolf::showgolf()
{
	std::cout << "Golfplayer " << cutTheString(fullname) << " is ranked as: " << handicap << std::endl;
}

