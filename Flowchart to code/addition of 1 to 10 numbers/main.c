#include <stdio.h>

int main()
{
    int sum = 0, count = 0;

    // using while loop
    /* while (count < 10)
    {
        count = count + 1;
        sum = sum + count;

        printf("%i", sum);
    } */

    // using for loop
    for (int sum = 0, count = 0; count < 10;)
    {
        count = count + 1;
        sum = sum + count;

        printf("%i", sum);
    }

    return 0;
}