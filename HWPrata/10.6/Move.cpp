#include "stdafx.h"
#include "Move.h"
#include <iostream>

void CMove::showMove() const
{
	std::cout << "X: " << x << ", Y: " << y << std::endl;
}

CMove CMove::add(const CMove & m) 
{
	x += m.getX();
	y += m.getY();
	return *this;
}

void CMove::reset(double a, double b)
{
	x = a;
	y = b;
}

double CMove::getX() const
{
	return x;
}

double CMove::getY() const
{
	return y;
}


