/*
Create a program converts fahrenheight to celsius and vice versa.
*/
#include <stdio.h>

int main()
{
    double fahrenheight, celsius;
    double result;

    printf("Please enter the fahrenheight value to convert: ");
    scanf("%d", &fahrenheight);
    result = (fahrenheight - 32) * (5/9);
    celsius = result;
    printf("Your celsius value is: ", celsius);
    getchar();



}
