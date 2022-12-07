// default function example

#include <stdio.h>

int mult()
{
    // function definition
    int a, b, result;
    a = 10, b = 25;
    result = a * b;
    return result;
}

int main()
{
    // calling function directly inside printf
    printf("total is %d", mult());
    return 0;
}