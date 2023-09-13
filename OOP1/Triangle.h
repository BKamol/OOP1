#pragma once
#include <math.h>

class Triangle
{
private:
	double a, b, c;

public:
	Triangle(double ap = 0, double bp = 0, double cp = 0);

	double get_a();
	double get_b();
	double get_c();
	double get_square();
	double get_perimeter();
	bool isosceles();
	Triangle create_similar(double k);
	

};