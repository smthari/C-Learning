#include <stdio.h>

int factorial(int i)
{
    if (i > 1)
    {
        printf("%d \n", i); // printing value of i for self clarification
        return i * factorial(i - 1);
    }
}

int main()
{
    int i = 5;

    int result = factorial(i);
    printf("Factorial of %d is %d ", i, result);

    return 0;
}