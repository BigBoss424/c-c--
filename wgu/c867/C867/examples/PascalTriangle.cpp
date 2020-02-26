#include <iostream>
#include <conio.h>

using namespace std;

long fact(int);
void main()
{
    clrscr();
    int i, n, c;
    cout << "How many lines (rows) would you like in your Pascal Triangle:" << endl;
    cin >> n;
    for(i = 0; i<n; i++)
    {
        for(c=0; c<=(n-i-2);c++)
        {
            cout << " ";
        }
        for(c=0; c<=i; c++)
        {
            cout << fact(i)/(fact(c)*fact(i-c));
            cout << " ";
        }
    }
    getch();
}

long fact(int n)
{
    int c;
    long res = 1;
    for(c=1; c<=n; c++)
    {
        res = res*c;
    }
    return (res);
}