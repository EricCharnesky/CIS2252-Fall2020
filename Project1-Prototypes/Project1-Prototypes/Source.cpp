// started from https://github.com/EricCharnesky/CIS2252-Fall2020/blob/master/Project1-Prototypes/Project1-Prototypes/Source.cpp

#include <iostream>

using namespace std;

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
	return 0;
}

int getTotalDeductions()
{
	return 0;
}

double calculateTaxesOwedAtEachBracketAndPrint(int adjustedGrossIncome)
{
	return 0.0;
}

void printTaxesOwedAsPercentages(double totalTaxesOwed, int grossIncome, int adjustedGrossIncome)
{
	cout << "Taxes owed as percentage of AGI: "
		<< adjustedGrossIncome / totalTaxesOwed << endl;

}
