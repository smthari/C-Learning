#include <stdio.h>

int main()
{
    int i, num, x, sum, JALLAD;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        num = i;
        JALLAD = num;

        while (num > 0)
        {
            x = num % 10;
            num = num / 10;
            sum = sum + x * x * x;
        }
        if (sum == JALLAD)
        {
            printf("THE ARMSTRONG NUMBER : %d\n", JALLAD);
        }
    }

    return 0;
}

// Output
/* THE ARMSTRONG NUMBER : 1
THE ARMSTRONG NUMBER : 153
THE ARMSTRONG NUMBER : 370
THE ARMSTRONG NUMBER : 371
THE ARMSTRONG NUMBER : 407 */