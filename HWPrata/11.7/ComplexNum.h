#pragma once
#include <iostream>

class CComplexNum
{
	int real;
	int im;
public:
	CComplexNum() :
		real(0), im(0) {};
	CComplexNum(int n1, int n2 = 0);
	~CComplexNum();
	void reset(int n1, int n2 = 0);
	CComplexNum operator+(const CComplexNum& cn2) const;
	CComplexNum operator-(const CComplexNum& cn2) const;
	CComplexNum operator*(const CComplexNum& cn2) const;
	CComplexNum operator*(int n) const;
	CComplexNum operator~() const;

	friend CComplexNum operator*(int n, const CComplexNum& cn);
	friend std::ostream& operator<<(std::ostream& os, const CComplexNum& cn);
	friend std::istream& operator>>(std::istream& os, CComplexNum& cn);
};

