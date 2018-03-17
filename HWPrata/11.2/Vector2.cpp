#include "stdafx.h"
#include "Vector2.h"
#include <cmath>


namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);

	void CVector2::set_x(int mag, int ang)
	{
		x = mag * std::cos(ang);
	}

	void CVector2::set_y(int mag, int ang)
	{
		y = mag * std::sin(ang);
	}


	CVector2::CVector2(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			set_x(n1, n2 / Rad_to_deg);
			set_y(n1, n2 / Rad_to_deg);
		}
		else
		{
			std::cout << "Incorect input" << std::endl;
			std::cout << "vector set to 0\n" << std::endl;
			*this = CVector2();
		}
	}

	void CVector2::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			set_x(n1, n2 / Rad_to_deg);
			set_y(n1, n2 / Rad_to_deg);
		}
		else
		{
			std::cout << "Incorect input" << std::endl;
			std::cout << "vector set to 0\n" << std::endl;
			x = y = 0.0;
			mode = RECT;
		}
	}


	CVector2::~CVector2()
	{
	}

	double CVector2::magval() const
	{
		return std::sqrt(x*x + y*y);
	}

	double CVector2::angval() const
	{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return std::atan2(y, x);
	}

	void CVector2::polar_mode()
	{
		mode = POL;
	}

	void CVector2::rect_mode()
	{
		mode = RECT;
	}

	CVector2 CVector2::operator+(const CVector2& b) const
	{
		return CVector2(x + b.x, y + b.y);
	}

	CVector2 CVector2::operator-(const CVector2& b) const
	{
		return CVector2(x - b.x, y - b.y);
	}

	CVector2 CVector2::operator-() const
	{
		return CVector2(-x, -y);
	}

	CVector2 CVector2::operator*(double n) const
	{
		return CVector2(n*x, n*y);
	}

	CVector2 operator*(double n, const CVector2 & a)
	{
		return a*n;
	}

	std::ostream& operator<<(std::ostream& os, const CVector2& v)
	{
		if (v.mode == CVector2::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ") ";
		else if (v.mode == CVector2::POL)
			os << "(m,a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ") ";
		else
			os << "Vector object mode os invalid";
		return os;
	}
}
