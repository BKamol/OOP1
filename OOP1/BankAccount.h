#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
	int id_number;
	string name;
	double money;

public:
	BankAccount(int id_num = 0, string nme = "", double mney = 0);

	void add_sub_money(double dm);
	double get_money();
	void set_money(double m);
	BankAccount new_account();


};