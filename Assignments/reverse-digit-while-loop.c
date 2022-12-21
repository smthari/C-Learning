#include <stdio.h>

int main()
{
    int number;
    printf("Enter numbers : ");
    scanf("%d", &number);
    int reverse = 0;

    while (number != 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }

    printf("%d", reverse);

    return 0;
}