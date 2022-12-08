// pointer to an array
#include <stdio.h>
int main()
{
    int array[5] = {10, 50, 20, 30, 40};
    int *ap = &array[0];

    printf("Array elements are");
    for (int i = 0; i < 5; i++)
    {
        printf("\nElement at index %d is %d ", i, *ap);
        ap++;
    }
    return 0;
}