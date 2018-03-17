// 11.1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"

int main()
{
	using VECTOR::CVector;
	srand(time(0));
	double direction;
	CVector step;
	CVector result;
	double targetVal;
	double stepValue;
	int countOfSteps(0);

	std::ofstream fout;
	fout.open("C:\\Users\\ATurchyn\\distance.txt");
	std::cout << "Enter the target distance(q to quit)" << std::endl;
	while (std::cin >> targetVal)
	{
		std::cout << "Enter the value of step" << std::endl;
		if (!(std::cin >> stepValue))
			break;
		while (result.magval() < targetVal)
		{
			step.reset(stepValue, rand() % 360, CVector::POL);
			result = result + step;
			++countOfSteps;
			fout << countOfSteps << ": "<< result << std::endl;
		}
		std::cout << "After " << countOfSteps << " steps, the subject the subject has the following location:\n" << result << std::endl;
		countOfSteps = 0;
		result.reset(0.0, 0.0);
	}
	  //
	std::cout << "Bye!\n";
	std::cin.get();
	std::cin.get();
	return 0;
}

