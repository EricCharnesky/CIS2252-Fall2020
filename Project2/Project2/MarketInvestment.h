#pragma once

#include <cstdlib>
#include <ctime>

class MarketInvestment
{
private:
	double balance;
	double withdrawlFee;

public:
	MarketInvestment(int seed = time(0)) : balance(0), withdrawlFee(10)
	{
		srand(seed);
	}


	void add(double moneyToAdd)
	{
		balance += moneyToAdd;
	}

	void withdraw(double moneyToWithdraw)
	{
		moneyToWithdraw = fabs(moneyToWithdraw);
		balance -= (moneyToWithdraw + withdrawlFee);
	}

	void applyReturnOnInvestment()
	{
		int randomReturnAdjustment = rand() % 13 - 6;
		double actualReturnOnInvestment = (4 + randomReturnAdjustment) / 100.0;
		balance += balance * actualReturnOnInvestment;
	}

	double getBalance()
	{
		return balance;
	}
};