//CharDisplay - output a character array to
//            - standard output, the MS-DOS window
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

//prototype declarations
void displayCharArray(char charArray[], int sizeOfArray);

int main(int nNumberOfArgs, char* pszArgs[])
{
    char charMyName[] = {'A', 'a', 'r', 'o', 'n'};
    displayCharArray(charMyName, 7);
    cout << endl;

    //wait until user is ready before terminating program
    //to allow the user to see the program results
    system("PAUSE");
    return 0;
}

//displayCharArray - display an array of characters by
//                   by outputting one character at a time
void displayCharArray(char charArray[], int numOfElements)
{
    for(int i = 0; i < numOfElements; i++)
    {
        cout << charArray[i];
    }
}
