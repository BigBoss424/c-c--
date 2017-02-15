#include "fibonacci.h"
#include <string>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int value = stoul(argv[1], nullptr, 10);
		static Fibonacci Fibo(value);
		Fibo.create_series();
		Fibo.get_data();
		return 0;
	}
}