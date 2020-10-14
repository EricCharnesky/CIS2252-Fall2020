#include <iostream>
#include <cmath>

#include "BankSavingsAccount.h"
#include "MarketInvestment.h"
#include "MoneyInYourPocket.h"

using namespace std;

void printBalances(MoneyInYourPocket& pocketMoney, BankSavingsAccount& savings, MarketInvestment& investments)
{
	cout << "Balance:" << endl;
	cout << "Money in your pocket: $" << pocketMoney.getBalance() << endl;
	cout << "Money in your bank savings: $" << savings.getBalance() << endl;
	cout << "Money in your market investments: $" << investments.getBalance() << endl;
}

int main()
{
	MoneyInYourPocket pocketMoney;
	BankSavingsAccount savings;
	MarketInvestment investments;

	savings.setInterestRate(.01);

	int currentAge;
	int desiredRetirementAge;

	cout << "How old are you now?" << endl;
	cin >> currentAge;

	cout << "What age do you want to retire at?" << endl;
	cin >> desiredRetirementAge;

	int yearsUntilRetirement = desiredRetirementAge - currentAge;

	double amount;
	cout << "How much money do you have in your pocket?" << endl;
	cin >> amount;
	pocketMoney.add(amount);

	cout << "How much money do you have in your bank savings?" << endl;
	cin >> amount;
	savings.add(amount);

	cout << "How much money do you have in your investments?" << endl;
	cin >> amount;
	investments.add(amount);

	for (;currentAge < desiredRetirementAge; currentAge++)
	{
		savings.applyReturnOnInvestment();
		investments.applyReturnOnInvestment();

		printBalances(pocketMoney, savings, investments);

		cout << "How much money do you want to add/withdraw ( negative ) to your pocket?" << endl;
		cin >> amount;
		if (amount < 0)
		{
			pocketMoney.withdraw(amount);
		}
		else if (amount > 0)
		{
			pocketMoney.add(amount);
		}
		
		cout << "How much money do you want to add/withdraw ( negative ) to your bank savings?" << endl;
		cin >> amount;
		if (amount < 0)
		{
			savings.withdraw(amount);
		}
		else if (amount > 0)
		{
			savings.add(amount);
		}
	
		cout << "How much money do you want to add/withdraw ( negative ) to your investments?" << endl;
		cin >> amount;
		if (amount < 0)
		{
			investments.withdraw(amount);
		}
		else if (amount > 0)
		{
			investments.add(amount);
		}
	}

	printBalances(pocketMoney, savings, investments);

	double grandTotalSavings = pocketMoney.getBalance() +
		savings.getBalance() +
		investments.getBalance();

	cout << "Your total retirement savings is: $" << grandTotalSavings << endl;

	double grandTotalAdjustedForInflation = grandTotalSavings / pow(1.02, yearsUntilRetirement);

	cout << "Your total retirement savings adjusted for inlation is: $" 
		<< grandTotalAdjustedForInflation << endl;

	return 0;
}

