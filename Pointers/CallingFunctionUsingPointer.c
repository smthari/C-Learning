// Calling function using pointer

#include <stdio.h>
int subtraction(int a, int b)
{
    return a - b;
}

int main()
{
    int n1 = 30, n2 = 5;
    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;

    int sum = *p1 + *p2;
    int div = *p1 / *p2;

    printf("\nAddition is    : %d ", sum);
    printf("\nDivision is    : %d ", div);

    // Calling function using pointer
    int sub = subtraction(*p1, *p2);
    printf("\nSubtraction is : %d ", sub);
}