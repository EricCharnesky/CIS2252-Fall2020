#include <iostream>
#include <string>


using namespace std;

int main()
{
	int number;

	// do will always run at least once - post-test
	do
	{
		cout << "Enter a number:" << endl;
		cin >> number;
	} while (number != 42);

	cout << "I'm a for loop!" << endl;
	for (int count = 0; count < 10; count++)
	{
		cout << "I have run " << count+1 << " times!" << endl;
	}

	cout << "I'm a while loop" << endl;
	int anotherCount = 0;
	while (anotherCount < 10)
	{
		cout << "I have run " << anotherCount + 1 << " times!" << endl;
		anotherCount++;
	}

	return 0;
}