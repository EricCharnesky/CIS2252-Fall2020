#include <iostream>
#include <string>


using namespace std;

int main()
{
	cout << "Welcome to the Byte Snack Shop!" << endl;
	cout << "1. Chocolate Chip Muffin\t$1.00" << endl;
	cout << "2. BBQ Potato Chips\t\t$1.50" << endl;
	cout << "3. Klondike Bar\t\t\t$2.00" << endl;

	int purchaseChoice;
	cin >> purchaseChoice;

	switch (purchaseChoice)
	{
	case 1:
		cout << "Enjoy your chocolate chip muffin!" << endl;
		break;
	case 2:
		cout << "Yummy BBQ Chips!" << endl;
		break;
	case 3:
		cout << "What will do for this?" << endl;
		break;
	// default case is optional
	default:
		cout << "We don't sell that..." << endl;
	}

	/*
	if (purchaseChoice == 1)
	{
		cout << "Enjoy your chocolate chip muffin!" << endl;
	}
	else if (purchaseChoice == 2)
	{
		cout << "Yummy BBQ Chips!" << endl;
	}
	else if (purchaseChoice == 3)
	{
		cout << "What will do for this?" << endl;
	}
	else
	{
		cout << "We don't sell that..." << endl;
	}
	*/

	string buyMore;
	cout << "Do you want to buy more? y/n" << endl;
	cin >> buyMore;

	if (buyMore == "y" || buyMore == "Y")
	{
		cout << "You want more? You can't handle more!" << endl;
	}

	cout << "Enter your percentage score as a whole number 0-100" << endl;
	int score;
	cin >> score;

	// THIS IS BAD NEWS BEARS! doesn't work and seems to always fire
	if (0 <= score <= 100)
	{
		cout << "WAT!" << endl;
	}

	if (score < 0 || score > 100)
	{
		cout << "That's an invalid score!" << endl;
	}
	else if (score < 63)
	{
		cout << "F" << endl;
	}
	else if (score < 66)
	{
		cout << "D" << endl;
	}
	else if (score < 70)
	{
		cout << "D+" << endl;
	}
	else if (score < 73)
	{
		cout << "C-" << endl;
	}
	else if (score < 76)
	{
		cout << "C" << endl;
	}
	else if (score < 80)
	{
		cout << "C+" << endl;
	}
	else if (score < 83)
	{
		cout << "B-" << endl;
	}
	else if (score < 86)
	{
		cout << "B" << endl;
	}
	else if (score < 90)
	{
		cout << "B+" << endl;
	}
	else if (score < 93)
	{
		cout << "A-" << endl;
	}
	else if (score <= 100)
	{
		cout << "A" << endl;
	}
	

	return 0;
}