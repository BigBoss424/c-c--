#include <iostream> 
#include <cmath>

using namespace std;

void displayIntro()
{
	cout << "Welcome to the Debt Collector" << endl;
	cout << "=============================" << endl;
}

void displayChoiceMenu()
{
	cout << "Please choose from the following options" << endl;
	cout << "1) Create a new Debtor" << endl;
	cout << "2) Update amount of a debtor" << endl;
	cout << "3) Delete a debtor" << endl;
	cout << "4) Replace a Debtor" << endl;
	cout << "5) Display Debtors" << endl;
	cout << "6) Display Sum of Debtors" << endl;
	cout << "7) Display Sum of a Debtor" << endl;
	cout << "9) Quit" << endl;


}

int main(int nArgs, char* pszArgs[])
{
	int menuChoice;

	displayIntro();

	displayChoiceMenu();
	cout << "Choice: "; 
	cin >> menuChoice; 

	if(menuChoice == 1)
	{
		cout << "Choice 1 works" << endl;
	}
	if(menuChoice == 2)
	{
		cout << "Choice 2 works" << endl;
	}
	if(menuChoice == 3)
	{
		cout << "Choice 3 works" << endl;
	}
	if(menuChoice == 4)
	{
		cout << "Choice 4 works" << endl;
	}
	if(menuChoice == 5)
	{
		cout << "Choice 5 works" << endl;
	}
	if(menuChoice == 6)
	{
		cout << "Choice 6 works" << endl;
	}
	if(menuChoice == 7)
	{
		cout << "Choice 7 works" << endl;
	}
	if(menuChoice == 8)
	{
		cout << "Choice 8 works" << endl;
	}
	if(menuChoice == 9)
	{
		cout << "Choice 9 works" << endl;
	}

	return 0;
}