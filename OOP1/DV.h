#pragma once


using namespace std;

class DV
{
private:

	double I, R;

public:
	DV();
	DV(double i, double r);

	double get_I();
	double get_R();
	double get_U() const;
	double get_Q();
	void posl(DV const &z);
	DV par(DV z);

};