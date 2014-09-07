/*
Array Demo
This program will give a simple overview on how to declare and manipulate an array and
a two dimensional array.
*/

#include <stdio.h>

void displayDescription(void)
{
    printf("Array Demo\n");
    printf("This program will give a simple overview on how to declare and\n");
    printf("manipulate an array and a two dimensional array.\n");
}

int main()
{
    int x,
        y;
    int array[8][8]; /*Declares an 8 by 8 two dimensional array. */

    for(x = 0; x < 8; x++)
    {
        for(y = 0; y < 8; y++)
        {
            array[x][y] = x * y; /* Set each element to a value */
        }
        printf("Array Indices: \n");
        for(x = 0; x < 8; x++)
        {
            for(y = 0; y < 8; y++)
            {
                printf("[%d][%d]=%d", x, y, array[x][y]);
            }
        }
        printf("\n");
    }
    getchar();
}
