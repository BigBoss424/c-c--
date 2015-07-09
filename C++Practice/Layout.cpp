//Layout - this program tries to give the reader an idea of the layout
//         local memory in the compiler

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int start;
    int n;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int end;

    //set output to hex mode
    cout.setf(ios::hex);
    cout.unsetf(ios::dec);

    //output the address of each variable in order to get an idea of
    //hhow variables are laid out in memory
    cout << "---    = " << &start << endl;
    cout << "&n     = " << &n << endl;
    cout << "&l     = " << &l << endl;
    cout << "&ll    = " << &ll << endl;
    cout << "&f     = " << &f << endl;
    cout << "&d     = " << &d << endl;
    cout << "&ld    = " << &ld << endl;
    cout << "---    = " << &end << endl;

    //terminate program
    system("PAUSE");
    return 0;
}
