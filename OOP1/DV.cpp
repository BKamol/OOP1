#include <iostream>
#include "DV.h"
using namespace std;

DV::DV()
{
	I = 0;
	R = 0;
}

DV::DV(double i, double r)
{
	I = i;
	R = r;
}

double DV::get_I()
{
	return I;
}

double DV::get_R()
{
	return R;
}

double DV::get_U() const
{
	double U = I * R;
	return U;
}

double DV::get_Q()
{
	double U = get_U();
	double Q = I * U * R;
	return Q;
}

void DV::posl(const DV &z)
{
	double U = get_U() + z.get_U();
	R = R + z.R;
	I = U / R;
	
}

DV DV::par(DV z)
{
	double new_I = I + z.get_I();
	double new_R = (R * z.get_R()) / (R + z.get_R());
	DV y(new_I, new_R);
	

	return y;
}

