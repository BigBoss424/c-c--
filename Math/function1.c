//Creating a program to solve this mathematical function

#include <stdio.h>

int main()
{

	int x;

	

	printf("Please enter the integer you wish to calculate: ");
	scanf("%d", &x);

	int formula = (4-x)/(4+x);

	printf("\n Your result is %d: ", formula);

	return 0;
	
}
