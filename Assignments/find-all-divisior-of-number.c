#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("You entered %d ", n);
    printf("\n"); // line break

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0) // if number divided by i then print value of i
        {
            printf("%d can be divided by %d \n", n, i);
        }
    }
}