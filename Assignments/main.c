#include <stdio.h>

// 🗒️ Write a program to pass 3 numbers to a function and function should return average of 3 numbers
/* int averageFun()
{
    int s1 = 100, s2 = 129, s3 = 133;
    int sum = s1 + s2 + s3;
    int average = sum / 3;
    return average;
} */

int main()
{

    // calling function to find average
    /* printf("average is %d", averageFun()); */

    // 🗒️ write a program to print armstrong number from the range 1 to 1000

    /* int i, num, x, sum, JALLAD;
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
    } */

    // 🗒️ Write a program to check vowel's using switch case
    /* char letter;
    printf("Enter letter to check vowel : ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
        printf("a is vowel ");
        break;

    case 'e':
        printf("e is vowel ");
        break;

    case 'i':
        printf("i is vowel ");
        break;

    case 'o':
        printf("o is vowel ");
        break;

    case 'u':
        printf("u is vowel ");
        break;

    default:
        printf("%c is not vowel", letter);
        // break;
    } */

    // 🗒️ Write a program to reverse the digit using while loop eg( 1234 => 4321 )
    /* int number;
    printf("Enter numbers : ");
    scanf("%d", &number);
    int reverse = 0;

    while (number != 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }

    printf("%d", reverse); */

    // 🗒️ Write a program to copy one file(.txt) into two files

    // 🗒️ Write a program to count character, word, lines from any text files

    // 🗒️ Write a program to check if the string is palindrome

    // 🗒️ Write a program to calculate factorial using recursion
    

    // 🗒️ Write a program to display sum of all elements in the array
    /* int array[3] = {5, 15, 3};
    int sum = array[0] + array[1] + array[2];
    printf("Sum of all array element is %d  ", sum); */

    /* 👨‍💻 using for loop ( SL ) */
    /* int length, sum, i;
    length = sizeof(array) / sizeof(array[0]);
    // printf("%d", length); // 3

    for (i = 0; i < 3; i++)
    {
        // sum = sum + array[i];
        // printf("%d", sum);
        // printf("%d \n", array[i]);
        // sum += array[i];
        sum += array[i];
    }

    // printf("%d \n", sum); */

    /* 👨‍💻 take input of array element from user and find sum of all element ( SL ) */

    // 🗒️ Accept a no from the user and find out all divisiors of the number
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

    return 0;
}
