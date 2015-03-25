/*

*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void displayDescription(void)
{
    cout << "This program will ask the user to type all the \n"
         << "integers between 8 and 23 using a for loop." << endl;
}

int main(int numArgs, char** pszArgs)
{
    displayDescription();

    int num, size, i=0;
    int array[16];

    cout << "Print the number between 8 to 23" << endl;

    while(1)
    {
        cin >> num;
        if(num >= 8 && num <= 23)
        {
            if(i == 0)
            {
                array[i] = num;
                i++;
            }
            else
            {
                for(int j = 0; j <= i; j++)
                {
                    if(array[j] != num)
                    {
                        array[i] = num;
                        i++;
                    }
                    else
                    {
                        cout << "Entered number PREVIOUSLY EXISTED!" << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            cout << "Entered number does not lie between 8 and 23" << endl;

            if(i==16)
                break;

        }


    }

    cout << "Complete array : " << endl;
    for(int j = 0; j < 16; j++)
    {
        cout << array[j] << " "  << endl;
    }
    return 0;
}
