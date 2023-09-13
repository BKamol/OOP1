#pragma once

#include <iostream>

using namespace std;

class Parabola
{
private:
	double a, b, c;

public:
	Parabola(double a = 0, double b = 0, double c = 0);
	double* get_coefficients();
	void show_coefficients();

	Parabola p_compression(double p);
	Parabola parallel_shift(double dx, double dy);
	bool has_roots();
	double* roots();
	
};
