/*
This array challenge is from the cprogramming.com/complete/array.html.

The exercise is in which I fill in the blanks for the given source code in the link
provided above.

*/

#include <iostream>

using namespace std;

void displayDescription(void)
{
    cout << "This array challenge is from the cprogramming.com/complete/array.html.\n"
         << "The exercise is in which I fill in the blanks for the given source code in the link\n"
         << "provided above.\n" << endl;
}

int main(int numArgs,char** pszArgs)
{
    displayDescription();

    int array[8];
    for(int x = 0;x<8;x++)
    {
        cin >> x;
        for(x = 0; x < 8; x++)
        {
            cout << array[x];
        }
    }

}
