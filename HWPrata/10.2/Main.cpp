// 10.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Golf.h"
#include <iostream>

int main()
{
	// To find the answer why char* output the string that is longer then I want
	CGolf player1("Nadal", 1);
	CGolf player2(2);
	CGolf player3("Jocovich", 4);
	player1.showgolf();
	player2.showgolf();
	player3.showgolf();
	player3.setHandicap(3);
	player3.showgolf();
	std::cin.get();
	std::cin.get();
    return 0;
}

