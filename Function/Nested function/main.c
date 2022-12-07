// NESTING OF FUNCTION
#include <stdio.h>

int function1()
{
    printf("You're in function 1 \n");
    function2();
}

void function3()
{
    printf("You're in function 3 \n");
}

void function2()
{
    printf("You're in function 2 \n");
    function3();
}

int main()
{
    function1();
    return 0;
}