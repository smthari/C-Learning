// arithmetic operator in pointers

#include <stdio.h>
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
}