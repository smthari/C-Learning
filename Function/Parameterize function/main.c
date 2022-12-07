// parameterize function example

#include <stdio.h>

int mult(int a, int b)
{
    // function definition
    int result = a * b;
    return result;
}

/* int main()
{
    // calling function directly inside printf
    // by assigning a default value to the a and b variable
    int a, b;
    printf("total is %d", mult(a = 5, b = 10));
    return 0;
} */

int main()
{
    int a, b;
    // taking input value of a & b from the user using scanf function
    printf("Enter two values ");
    scanf("%d %d", &a, &b);

    // calling function directly inside printf
    // passing a and b as arguments (actual parameters)
    printf("total is %d", mult(a, b));
    return 0;
}