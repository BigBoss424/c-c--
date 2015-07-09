//Concatenate - concatenate two stringstream
//               with a " - " in the middle
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

//prototype declaration
void concatString(char szTarget[], const char szSource[]);

int main(int nNumberofArgs, char** pszArgs)
{
    //read first string
    char szString1[260];
    cout << "Enter string #1: ";
    cin.getline(szString1, 128);

    //...now the second string
    char szString2[260];
    cout << "Enter string #2: ";
    cin.getline(szString2, 128);

    // ..concatenate a " - " onto the first ...
    concatString(szString1, " - ");

    // ..now add the second string
    concatString(szString1, szString2);

    // ..and display the result
    cout << "\n" << szString1 << endl;

    //wait until user is ready before terminating program
    //to allow the user to see the program result.
    //exit program

    system("PAUSE");
    return 0;
}

void concatString(char szTarget[], const char szSource[])
{
    // find the end of the first string
    int targetIndex = 0;
    while(szTarget[targetIndex])
    {
        targetIndex++;
    }

    //tack the second onto the end of the first
    int sourceIndex = 0;
    while(szSource[sourceIndex])
    {
        szTarget[targetIndex] = szSource[sourceIndex];
        targetIndex++;
        sourceIndex++;
    }

    //tack on the terminating null
    szTarget[targetIndex] = '\0';
}
