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

// Output
/* Enter number : 12
You entered 12
12 can be divided by 1
12 can be divided by 2
12 can be divided by 3
12 can be divided by 4
12 can be divided by 6
12 can be divided by 12  */
