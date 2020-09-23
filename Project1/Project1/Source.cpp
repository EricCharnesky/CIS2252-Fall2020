// started from https://github.com/EricCharnesky/CIS2252-Fall2020/blob/master/Project1-Prototypes/Project1-Prototypes/Source.cpp

#include <iostream>

using namespace std;

const int STANDARD_SINGLE_DEDUCTION = 12400;

const int TOP_OF_10_PERCENT_BRACKET = 9875;
const int TOP_OF_12_PERCENT_BRACKET = 40125;
const int TOP_OF_22_PERCENT_BRACKET = 85525;
const int TOP_OF_24_PERCENT_BRACKET = 163300;
const int TOP_OF_32_PERCENT_BRACKET = 207350;
const int TOP_OF_35_PERCENT_BRACKET = 518400;

int getGrossIncome();
int getTotalDeductions();
double calculateTaxesOwedAtEachBracketAndPrint(int adjustedGrossIncome);
void printTaxesOwedAsPercentages(
	double totalTaxesOwed, int grossIncome, int adjustedGrossIncome);

int main()
{
	int grossIncome = getGrossIncome();

	int totalDeductions = getTotalDeductions();

	int adjustedGrossIncome = grossIncome - totalDeductions;

	double totalTaxesOwed = calculateTaxesOwedAtEachBracketAndPrint(adjustedGrossIncome);

	printTaxesOwedAsPercentages(totalTaxesOwed, grossIncome, adjustedGrossIncome);

	return 0;
}

int getGrossIncome()
{
	int grossIncome = 0;
	int income = 0;

	do
	{
		cout << "Enter your income or 0 to stop entering income" << endl;
		cin >> income;
		grossIncome += income;
	} while (income != 0);

	return grossIncome;
}

int getTotalDeductions()
{
	int totalDeductions = 0;
	int deductionChoice = 0;

	while (deductionChoice < 1 || deductionChoice > 2)
	{
		cout << "do you want the standard deduction or to itemize?" << endl;
		cout << "Enter 1 for Standard Deduction" << endl;
		cout << "Enter 2 for Itemized Deductions" << endl;
		cin >> deductionChoice;
	}

	if (deductionChoice == 1)
	{
		totalDeductions = STANDARD_SINGLE_DEDUCTION;
	}
	else
	{
		int deduction = 0;
		do
		{
			cout << "Enter a deduction or 0 to stop" << endl;
			cin >> deduction;
			totalDeductions += deduction;
		} while (deduction != 0);

		// this is just for fun!
		if (totalDeductions < STANDARD_SINGLE_DEDUCTION)
		{
			totalDeductions = STANDARD_SINGLE_DEDUCTION;
			cout << "You had less than the standard, we'll use the standard instead!" << endl;
		}

		// conditional operator
		totalDeductions = totalDeductions < STANDARD_SINGLE_DEDUCTION 
			? STANDARD_SINGLE_DEDUCTION : totalDeductions;
	}

	return totalDeductions;
}

double calculateTaxesOwedAtEachBracketAndPrint(int adjustedGrossIncome)
{
	double taxesOwedAt10Percent = 0;
	double taxesOwedAt12Percent = 0;
	double taxesOwedAt22Percent = 0;
	double taxesOwedAt24Percent = 0;
	double taxesOwedAt32Percent = 0;
	double taxesOwedAt35Percent = 0;
	double taxesOwedAt37Percent = 0;

	int incomeToBeTaxed = adjustedGrossIncome;

	if (incomeToBeTaxed > TOP_OF_35_PERCENT_BRACKET)
	{
		taxesOwedAt37Percent = (incomeToBeTaxed - TOP_OF_35_PERCENT_BRACKET) * .37;
		incomeToBeTaxed = TOP_OF_35_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > TOP_OF_32_PERCENT_BRACKET)
	{
		taxesOwedAt35Percent = (incomeToBeTaxed - TOP_OF_32_PERCENT_BRACKET) * .35;
		incomeToBeTaxed = TOP_OF_32_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > TOP_OF_24_PERCENT_BRACKET)
	{
		taxesOwedAt32Percent = (incomeToBeTaxed - TOP_OF_24_PERCENT_BRACKET) * .32;
		incomeToBeTaxed = TOP_OF_24_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > TOP_OF_22_PERCENT_BRACKET)
	{
		taxesOwedAt24Percent = (incomeToBeTaxed - TOP_OF_22_PERCENT_BRACKET) * .24;
		incomeToBeTaxed = TOP_OF_22_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > TOP_OF_12_PERCENT_BRACKET)
	{
		taxesOwedAt22Percent = (incomeToBeTaxed - TOP_OF_12_PERCENT_BRACKET) * .22;
		incomeToBeTaxed = TOP_OF_12_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > TOP_OF_10_PERCENT_BRACKET)
	{
		taxesOwedAt12Percent = (incomeToBeTaxed - TOP_OF_10_PERCENT_BRACKET) * .12;
		incomeToBeTaxed = TOP_OF_10_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > 0)
	{
		taxesOwedAt10Percent = incomeToBeTaxed * .10;
		incomeToBeTaxed = 0;
	}

	cout << "Taxes owed at 10%: $" << taxesOwedAt10Percent << endl;
	cout << "Taxes owed at 12%: $" << taxesOwedAt12Percent << endl;
	cout << "Taxes owed at 22%: $" << taxesOwedAt22Percent << endl;
	cout << "Taxes owed at 24%: $" << taxesOwedAt24Percent << endl;
	cout << "Taxes owed at 32%: $" << taxesOwedAt32Percent << endl;
	cout << "Taxes owed at 35%: $" << taxesOwedAt35Percent << endl;
	cout << "Taxes owed at 37%: $" << taxesOwedAt37Percent << endl;

	double totalTaxesOwed = taxesOwedAt10Percent + taxesOwedAt12Percent
		+ taxesOwedAt22Percent + taxesOwedAt24Percent
		+ taxesOwedAt32Percent + taxesOwedAt35Percent
		+ taxesOwedAt37Percent;

	cout << "Total taxes owed: " << totalTaxesOwed << endl;

	return totalTaxesOwed;
}

void printTaxesOwedAsPercentages(double totalTaxesOwed, int grossIncome, int adjustedGrossIncome)
{
	cout << "Taxes owed as percentage of AGI: "
		<< totalTaxesOwed / adjustedGrossIncome << endl;
	cout << "Taxes owed as percentage of gross income: "
		<< totalTaxesOwed / grossIncome << endl;

}