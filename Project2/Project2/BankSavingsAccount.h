#pragma once

class BankSavingsAccount
{
private:
	double balance;
	double interestRate;

public:
	BankSavingsAccount() : balance(0), interestRate(0)
	{

	}

	void setInterestRate(double interestRate)
	{
		if (interestRate >= 1)
		{
			interestRate /= 100;
		}
		this->interestRate = interestRate;
	}

	double getInterestRate()
	{
		return interestRate;
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

	void applyReturnOnInvestment()
	{
		balance += balance * interestRate;
	}

	double getBalance()
	{
		return balance;
	}
};