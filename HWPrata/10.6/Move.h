#pragma once
class CMove
{
	double x;
	double y;
public:
	CMove(double a, double b) :
		x(a), y(b) {};
	void showMove() const;
	CMove add(const CMove& m) ;
	void reset(double a = 0, double b = 0);

	double getX() const;
	double getY() const;
};

