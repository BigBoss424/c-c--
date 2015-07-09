//DisplayString - output a character array to
//                standard output, the MS-DOS window
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void displayString(char stringArray[]);

int main(int nNumberofArgs, char* pszArgs)
{
    char stringArray[] = {'A', 'a', 'r', 'o', 'n', '\0'};

    displayString(stringArray);

    //Exit the program
    system("PAUSE");
    return 0;
}

void displayString(char stringArray[])
{
    for(int i = 0; stringArray[i] != '\0'; i++)
    {
        cout << stringArray[i];
    }
}
