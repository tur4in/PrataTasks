// 11.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ComplexNum.h"
#include <iostream>


int main()
{
	CComplexNum cn1;
	CComplexNum cn2(3);
	CComplexNum cn3(2,2);
	std::cout << cn1 << std::endl << cn2 << std::endl << cn3 << std::endl << "Enter the values of complex number" << std::endl;
	std::cin >> cn1;
	std::cout << cn1 << std::endl;
	CComplexNum  res;
	res = cn1 + cn2;
	std::cout << res << std::endl;
	//res = ~res;
	std::cout << ~res << std::endl;
	std::cin.get();
	std::cin.get();
    return 0;
}

