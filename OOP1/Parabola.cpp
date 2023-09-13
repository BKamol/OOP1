#include "Parabola.h"
#include <math.h>

Parabola::Parabola(double i, double k, double j)
{
	a = i;
	b = k;
	c = j;
}

double* Parabola::get_coefficients()
{
	double coefficients[3] = { a, b, c };
	return coefficients;
}

void Parabola::show_coefficients()
{
	cout << a << ' ' << b << ' ' << c << endl;
}

Parabola Parabola::p_compression(double p)
{
	Parabola P(a * p, b, c);
	return P;
}

Parabola Parabola::parallel_shift(double dx, double dy)
{
	Parabola P(a, b + dx, c + dy);
	return P;
}

bool Parabola::has_roots()
{
	Parabola P(a, 2 * a * b, b * b + c);
	double D = (2 * a * b) * (2 * a * b) - 4 * (b * b + c) * (a);
	return D >= 0;
}

double* Parabola::roots()
{
	double roots[2] = {0, 0}; //Нулям лучше не быть корнями уравнения a*(x+b)^2+c
	Parabola P(a, 2 * a * b, b * b + c);
	double D = (2 * a * b) * (2 * a * b) - 4 * (b * b + c) * (a);
	if (D >= 0)
	{
		double x1 = ( -(2 * a * b) + sqrt(D) ) / (2 * a);
		double x2 = (-(2 * a * b) - sqrt(D)) / (2 * a);
		roots[0] = x1; roots[1] = x2;
	}
	
	return roots;
}
