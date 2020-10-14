#pragma once

#include <cmath>

class MoneyInYourPocket
{
private:
	double balance;

public:
	MoneyInYourPocket() : balance(0)
	{
		// balance = 0; // same as above
	}

	void add(double moneyToAdd)
	{
		balance += moneyToAdd;
	}

	void withdraw(double moneyToWithdraw)
	{
		moneyToWithdraw = fabs(moneyToWithdraw);
		balance -= moneyToWithdraw;
	}

	double getBalance()
	{
		return balance;
	}
};