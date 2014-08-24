//While demo - Shows how while loops work in c++

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int loopCount;
	cout << "Enter how many times you want to loop: ";
	cin >> loopCount;

	while(loopCount > 0)
    {
        loopCount = loopCount - 1;
        cout << "Only " << loopCount
             << " loops to go" << endl;
    }


	return 0;
}
