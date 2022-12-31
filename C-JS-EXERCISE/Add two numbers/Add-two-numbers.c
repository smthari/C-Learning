// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    int total = a + b;
    printf("Addition of %d %d is %d", a, b, total);

    return 0;
}