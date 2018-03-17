// HW10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"

int main()
{
	CPerson person;
	CPerson person2("Turchyn");
	CPerson person3("Lavriv", "Roman");
	person.Show();
	person2.Show();
	person3.Show();
	person.FormalShow();
	person2.FormalShow();
	person3.FormalShow();
	std::cin.get();
    return 0;
}

