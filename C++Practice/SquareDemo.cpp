//SquareDemo - demonstrates the squaring of a number
//Implement a menu system for the different data types I'll be squaring

//Declaring libraries
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

//intSquare - this function will square an integer value
int intSquare(int intVar)
{
	return intVar * intVar;
}
//doubleSquare - this function will square a double value
double doubleSquare(double doubleVar)
{
	return doubleVar * doubleVar;
}
//floatSquare - this function will square a float value
float floatSquare(float floatVal)
{
	return floatVal * floatVal;
}
//longSquare- this function will square a long value
long longSquare(long longVal)
{
	return longVal * longVal;
}

//displayMenu - This function will display the menu options for 
//		the main funciton
void displayMenu(void)
{
	cout << "Please choose from the following options" << "\n"
	     << "1) Square Integer Value" << "\n"
	     << "2) Square Double Value" << "\n"
	     << "3) Square Float Value" << "\n"
	     << "4) " << "\n"
	     << "5) " << "\n"  
	     << endl;
	return;
}	

//displayDescription - This function will display the description of
//		       the program for the user to see
void displayDescription(void)
{
	cout << "This program sums the square of multiple\n" 
	     << "series of numbers. Terminate each sequence\n"
	     << "by entering a negative number.\n"
	     << "Terminate the series by entering an\n"
	     << "empty sequence.\n"
	     << endl;
	return;
}

//sumDoubleSquareSequence - accumulate the square of the number
//			 entered at the keyboard into a sequence
//			 until the user enters a negative number
double sumDoubleSquareSequence(void)
{
	//loop forever
	double accumulator = 0.0;
		for(;;)
		{
			//fetch another number
			double dValue = 0;
			cout << "Enter next number: ";
			cin >> dValue;

			if(dValue < 0)
			{
				//...then exit from the loop
				break;
			}
			
			// ...otherwise calculate the square
			double value = doubleSquare(dValue);
			
			// now add the square to the accumulator
			accumulator += value;
		}

		//return the accumulated value
		return accumulator;
}

//sumIntSquareSequence - accumulate the square of the int number
//			 entered at the keyboard into a sequence
//			 until the user enteres a negative number
int sumIntSquareSequence(void)
{
	//loop forever
	int accumulator = 0;
		for(;;)
		{
			//fetch another number;
			int iValue;
			cout <<  "Enter next number";
			cin >> iValue;
			
			//if it's negative
			if(iValue < 0)
			{
				//...break from the loop
				break;
			}

			//...otherwise calculate the square
			int value = intSquare(iValue);
			
			//add values to accumulator
			accumulator += value;
		}
	return accumulator;
}

int main(int nNumberofArgs, char* pszArgs[])
{
	displayDescription();

	//Continue to accumulate numbers...
	for(;;)
	{
		// sum a sequence of numbers entered from
		// the keyboard
		cout << "Enter next sequence" << endl;
		double accumulatedValue = sumSquareSequence();

		// terminate if the sequence is zero or negative
		if (accumulatedValue <= 0.0)
		{ break; }

		// now output the accumulated result
		cout << "\nThe total of the values squared is: " << accumulatedValue;
	}
}
