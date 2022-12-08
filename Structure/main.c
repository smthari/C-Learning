#include <stdio.h>

struct structure1
{
    int rollno;
    float cgpa;
};

int main()
{
    struct structure1 s1;
    s1.rollno = 20;
    s1.cgpa = 8.4;

    // printing values
    printf("\nEntered data is %i and %f ", s1.rollno, s1.cgpa);

    struct structure1 s2;
    s2.rollno = 20;
    s2.cgpa = 8.4;

    // printing values
    printf("\nEntered data is %i and %f ", s2.rollno, s2.cgpa);

    return 0;
}