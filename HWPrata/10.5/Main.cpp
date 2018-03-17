// 10.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>


int main()
{
	CStack customerStack;
	customerStack.push(customer{ "slavko", 300 });
	customerStack.push(customer{ "bartek", 800 });
	customerStack.push(customer{ "marek", 550 });
	customerStack.push(customer{ "marush", 1300 });
	customerStack.push(customer{ "ofek", 600 });
	customerStack.push(customer{ "dorosh", 1000 });
	customer custom;
	customerStack.pop(custom);
	customerStack.pop(custom);
	std::cout << customerStack.getSlice() <<std::endl;
	customerStack.pop(custom);
	customerStack.pop(custom);
	std::cout << customerStack.getSlice() << std::endl;
	customerStack.pop(custom);
	customerStack.pop(custom);
	std::cout << customerStack.getSlice() << std::endl;
	std::cin.get();
	std::cin.get();
    return 0;
}

