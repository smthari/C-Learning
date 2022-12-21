
// 🗒️ write a program to print armstrong number from the range 1 to 1000 ✅
#include <stdio.h>

int main()
{
    int i, n, x, sum, armstrong;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        n = i;
        armstrong = n;

        while (n > 0)
        {
            x = n % 10;
            n = n / 10;
            sum = sum + x * x * x;
        }
        if (sum == armstrong)
        {
            printf("Armstrong number : %d\n", armstrong);
        }
    }
    return 0;
}

// for easy understanding - print armstrong number from 152 to 153
/* #include <stdio.h>

int main()
{
    int i, n, x, sum, armstrong;
    for (i = 152; i <= 153; i++)
    {
        sum = 0;
        n = i;
        armstrong = n;

        while (n > 0)
        {
            x = n % 10;
            n = n / 10;
            sum = sum + x * x * x;
            // printf("x %d \n", x);
            // printf("n= %d \n", n);
            // printf("sum %d \n", sum);
        }
        if (sum == armstrong)
        {
            printf("THE ARMSTRONG NUMBER : %d\n", armstrong);
        }
    }

    return 0;
} */