#include <stdio.h>

int foo(int x)
{
    if(x < 10)
    {
        printf("x is less than 10\n");
    }
    return x;
}

int main()
{
    int y;
    foo(y);
    return 0;
}


