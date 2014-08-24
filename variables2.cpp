//This program will demonstrate comparing two variables

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int nArg1,
		nArg2;

	cout << "Enter variable 1: ";
	cin >> nArg2;

	cout << "Enter variable 2: ";
	cin >> nArg1;

	if(nArg1 > nArg2)
	{
		cout << "Variable 2 is greater than Variable 1";
	}
	else
	{
		cout << "Variable 2 is smaller than Variable 1";
	}

	system("PAUSE");
	return 0;
}
