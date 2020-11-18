#include <iostream>

using namespace std;

int fibonacciIterative(int nthTerm)
{
	int current = 1;
	int previous = 0;
	int currentNth = 1;

	while (currentNth < nthTerm)
	{
		int next = current + previous;
		previous = current;
		current = next;
		currentNth++;
	}

	return current;

}

int fibonacciBadRecursion(int nthTerm)
{
	if (nthTerm <= 2)
	{
		return 1;
	}
	return fibonacciBadRecursion(nthTerm - 1) + fibonacciBadRecursion(nthTerm - 2);
}

int fibonacciGoodRecurisonHelper(int nthTerm, int currentNth, int previous, int current)
{
	if (nthTerm == currentNth)
	{
		return previous + current;
	}
	return fibonacciGoodRecurisonHelper(nthTerm, currentNth + 1, current, current + previous);
}

int fibonacciGoodRecursion(int nthTerm) 
{
	if (nthTerm <= 2)
	{
		return 1;
	}
	return fibonacciGoodRecurisonHelper(nthTerm, 3, 1, 1);
}




void countDown(int number)
{
	if (number == 0)
	{
		cout << "BLAST OFF!" << endl;
	}
	else
	{
		//cout << number << "..." << endl;
		countDown(number - 1);
	}

}


int main()
{
	countDown(-1);
	for (int nth = 1; nth <= 40; nth++)
	{
		cout << fibonacciGoodRecursion(nth) << " ";
		cout << fibonacciIterative(nth) << endl;
	}
	
	return 0;
}