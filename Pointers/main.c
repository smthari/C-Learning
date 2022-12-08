
// POINTER IN C
#include <stdio.h>

int main()
{
    int num = 20; // variable declaration.
    int *ip;      // pointer declaration
    ip = &num;    // storing address of num variable into pointer

    // print num variable value
    printf("\nValue of num variable     : %d ", num);

    // print the address stored in ip pointer variable
    printf("\nAddress stored in ip var  : %d ", ip);

    // access the value at the address available in pointer
    printf("\nValue of *ip variable     : %d ", *ip);

    return 0;
}
