#include <stdio.h>

int averageFun()
{
    int s1 = 100, s2 = 129, s3 = 133;
    int sum = s1 + s2 + s3;
    int average = sum / 3;
    return average;
}

int main()
{

    printf("average is %d", averageFun());
    return 0;
}

// Output
// average is 120