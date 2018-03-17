#pragma once
#include <string>

class CPerson
{
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	CPerson() { lname = ""; fname[0] = '\0'; }
	CPerson(const std::string& ln, const char* fn = "Heyyou");

	void Show() const;
	void FormalShow() const;
};

