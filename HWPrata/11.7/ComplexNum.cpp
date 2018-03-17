#include "stdafx.h"
#include "ComplexNum.h"





CComplexNum::CComplexNum(int n1, int n2)
{
	real = n1;
	im = n2;
}

CComplexNum::~CComplexNum()
{
}

void CComplexNum::reset(int n1, int n2)
{
	real = n1;
	im = n2;
}

CComplexNum CComplexNum::operator+(const CComplexNum & cn2) const
{
	return CComplexNum(real + cn2.real, im + cn2.im);
}

CComplexNum CComplexNum::operator-(const CComplexNum & cn2) const
{
	return CComplexNum(real + cn2.real, im + cn2.im);
}

CComplexNum CComplexNum::operator*(const CComplexNum & cn2) const
{
	return CComplexNum(real*cn2.real - im*cn2.im, im*cn2.real + real*cn2.im);
}

CComplexNum CComplexNum::operator*(int n) const
{
	return CComplexNum(real*n, im*n);
}

CComplexNum CComplexNum::operator~() const
{
	return CComplexNum(real, -im);
}

CComplexNum operator*(int n, const CComplexNum & cn)
{
	return cn*n;
}

std::ostream & operator<<(std::ostream& os, const CComplexNum & cn)
{
	os << "(" << cn.real << ", " << cn.im << "i)" << std::endl;
	return os;
}

std::istream & operator >> (std::istream& os, CComplexNum & cn)
{
	int n1, n2;
	os >> n1 >> n2;
	cn.reset(n1,n2);
	return os;
}
