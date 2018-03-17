#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

namespace VECTOR
{
	class CVector2
	{
	public:
		enum Mode { RECT, POL };
	private:
		double x;
		double y;
		//double mag;
		//double ang;
		Mode mode;

		void set_x(int mag, int ang);
		void set_y(int mag, int ang);
	public:
		CVector2() :
			x(0), y(0), mode(RECT) {};
		CVector2(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~CVector2();
		double xval() const { return x; };
		double yval() const { return y; };
		double magval() const;
		double angval() const;
		void polar_mode();
		void rect_mode();

		CVector2 operator+ (const CVector2& b) const;
		CVector2 operator- (const CVector2& b) const;
		CVector2 operator- () const;
		CVector2 operator* (double n) const;

		friend CVector2 operator*(double n, const CVector2& a);
		friend std::ostream& operator<<(std::ostream& os, const CVector2& v);
	};
}
#endif

