#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFileStream;
	string fileName;
	cout << "enter a filename:" << endl;
	cin >> fileName;
	inputFileStream.open(fileName);
	if (!inputFileStream)
	{
		cout << "Can't open " << fileName;
		return 1;
	}

	string line;
	while (!inputFileStream.eof())
	{
		getline(inputFileStream, line);
		cout << line << endl;
	}

	inputFileStream.close();

	ofstream outputFileStream;
	outputFileStream.open("writiable.txt");
	cout << "enter something to write to the file: " << endl;
	string toWrite;
	cin >> toWrite;
	outputFileStream << toWrite << endl;
	outputFileStream.close();
	
	return 0;
}