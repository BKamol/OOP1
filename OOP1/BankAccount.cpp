#include "BankAccount.h"

BankAccount::BankAccount(int id_num, string nme, double mney)
{
	id_number = id_num;
	name = nme;
	money = mney;

}

void BankAccount::add_sub_money(double dm)
{
	money += dm;
}

double BankAccount::get_money()
{	
	return money;
}

void BankAccount::set_money(double m)
{
	money = m;
}

BankAccount BankAccount::new_account()
{
	BankAccount new_acc(id_number, name, money);
	return new_acc;
}
