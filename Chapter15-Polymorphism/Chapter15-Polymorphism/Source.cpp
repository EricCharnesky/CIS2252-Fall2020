#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	
	Animal* mySheep = new Sheep("black");
	
	// becuase the function is marked virutal in Animal, it will try and run the subclass version
	cout << mySheep->makeNoise() << endl;


	return 0;
}