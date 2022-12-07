// ARRAY AS FUNCTON ARGUMENT
#include <stdio.h>

int average(int a[], int size)
{
    int sum = 0, avg;
    for (int i = 0; i < size; i++)
    {
        printf("index %d  \n", i); // printing value of i for self clarification
        sum = sum + a[i];
    }
    avg = sum / size;
    return avg;
}

int main()
{
    int array[10] = {9, 25, 65, 10, 15, 85, 64, 78, 96, 53};

    printf("Average of array element is : %d ", average(array, 10));
    return 0;
}