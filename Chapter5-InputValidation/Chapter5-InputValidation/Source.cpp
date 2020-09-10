#include <iostream>
#include <string>


using namespace std;

int main()
{
	char buyMore = 'y';
	double totalPurchasePrice = 0;
	int purchaseChoice = 0;

	while (purchaseChoice != 4)
	{
		cout << "Welcome to the Byte Snack Shop!" << endl;
		cout << "1. Chocolate Chip Muffin\t$1.00" << endl;
		cout << "2. BBQ Potato Chips\t\t$1.50" << endl;
		cout << "3. Klondike Bar\t\t\t$2.00" << endl;
		cout << "4. Go to Checkout!" << endl;
		cin >> purchaseChoice;
		
		//while ( !(purchaseChoice >= 1 && purchaseChoice <= 3) )
		while (purchaseChoice < 1 || purchaseChoice > 4)
		{
			cout << "Welcome to the Byte Snack Shop!" << endl;
			cout << "1. Chocolate Chip Muffin\t$1.00" << endl;
			cout << "2. BBQ Potato Chips\t\t$1.50" << endl;
			cout << "3. Klondike Bar\t\t\t$2.00" << endl;
			cout << "4. Go to Checkout!" << endl;
			cin >> purchaseChoice;
		}

		if (purchaseChoice == 1)
		{
			cout << "Enjoy your chocolate chip muffin!" << endl;
			totalPurchasePrice += 1;
		}
		else if (purchaseChoice == 2)
		{
			cout << "Yummy BBQ Chips!" << endl;
			totalPurchasePrice += 1.5;
		}
		else if (purchaseChoice == 3)
		{
			cout << "What will do for this?" << endl;
			totalPurchasePrice += 2;
		}
		 else if (purchaseChoice == 4)
		{
			// break will STOP the loop
			break;
		}
		cout << "Your current total is: $" << totalPurchasePrice << endl;
	}

	cout << "Your total due is: $" << totalPurchasePrice << endl;
	
	double cashGiven;
	cout << "How much cash do you give the cashier?" << endl;
	cin >> cashGiven;

	while (cashGiven < totalPurchasePrice)
	{
		cout << "That's not enough money to cover your bill" << endl;
		cout << "How much cash do you give the cashier?" << endl;
		cin >> cashGiven;
	}

	cout << "Thanks for shopping, your change is: $" << 
		(cashGiven - totalPurchasePrice) << endl;

	return 0;
}