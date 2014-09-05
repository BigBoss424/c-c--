/*
In this demo I will be practicing the use of a switch case demo by
creating a menu driven application. In the form of a calculator.
*/

#include <stdio.h>

void displayDescription(void)
{
    printf("This program will go over the use and implementation of\n");
    printf("a switch case structure in the form of a menu driven application.\n");
    printf("The application will ask the user for two integer variables and how \n");
    printf("to manipulate those values using calculator operands.\n");
    printf("The calculator will use addition, multiplication, division, and subtraction.\n\n");
}

void displayMenu(void)
{
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("5) Quit\n");
    printf("Choice ---->");
}
int addition(int x, int y)
{
    return x+y;
}

int subtraction(int x, int y)
{
    return x-y;
}

int multiplication(int x, int y)
{
    return x*y;
}

int division(int x, int y)
{
    return x-y;
}

int main()
{
    int x,y;
    int choice;

    displayDescription();
    printf("Welcome to the Calculator Program!\n\n");

    printf("Please enter a non-negative value: \n");
    scanf("%d", &x);
    printf("Please enter another non-negative value: \n");
    scanf("%d", &y);

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: printf("Value 1 + Value 2 = ", addition(x,y));
                    break;
            case 2: printf("Value 1 + Value 2 = ", addition(x,y));
                    break;
            case 3: printf("Value 1 + Value 2 = ", addition(x,y));
                    break;
            case 4: printf("Value 1 + Value 2 = ", addition(x,y));
                    break;
        }

    }while(choice != 5);



}

