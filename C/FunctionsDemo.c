#include <stdio.h>

int mult(int x, int y);

int main()
{
    int x;
    int y;

    printf("Please enter two numbers to be multiplied\n");
    printf("Please enter the first value to be multiplied: ");
    scanf("%d", &x);
    printf("Please enter the second value to be multiplied: ");
    scanf("%d", &y);
    printf("The product of your two numbers is %d\n", mult(x,y));
    getchar();

}

int mult(int x, int y)
{
    return x*y;
}
