/*
This demo will go over how to use and implement pointers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *p; //Declaration of pointer to an integer.

    p = &x; /*Read it, "assign the address of x to p" */
    scanf("%d", &x); /*Put a value in x, we could also use p here */
    printf("%d\n", *p); /*Note the use of the * to get the value) */
    getchar();

    int *ptr = malloc(sizeof(int));

    free(ptr); //free up the used memory allocated to pointer ptr
}


