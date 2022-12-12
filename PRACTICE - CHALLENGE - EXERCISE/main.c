#include <stdio.h>
int main()
{

    // FLOWCHART TO PROGRAM

    // ❓ add two numbers
    /* int a, b;
    printf("enter two values : ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("%d", sum); */

    // ❓ find the greatest of two numbers
    /* int n1, n2;
    printf("enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        printf("n1 is greater");
    }
    else
    {
        printf("n2 is greater");
    } */

    // ❓ Take input for three subjects and check whether the student is pass or fail based on each subject's mark
    /* int s1, s2, s3;
    printf("Enter value of 3 subjects : ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 >= 40 && s2 >= 40 && s3 >= 40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    } */

    // ❓ addition of 1 to 10 numbers
    /* int sum = 0, count = 0;

    // using while loop
    while (count < 10)
    {
        count = count + 1;
        sum = sum + count;

        printf("%i \n", sum);
    } */

    // using for loop
    /* for (int sum=0, count=0;count < 10;) {
    count = count + 1 ;
    sum = sum + count ;

    printf("%i", sum);
    } */

    // ❓Take input for five subjects find out the average and print fail if total marks<150 else pass
    /* int s1, s2, s3, s4, s5;

    printf("Enter marks of five subjects : ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    int average = s1 + s2 + s3 + s4 + s5 / 5;

    if (average < 150)
    {
        printf("Fail");
    }
    else
    {
        printf("pass");
    } */

    // ❓  print 11 to 20
    /* int n = 10;
    for (int i = 0; i < 10; i++)
    {
        n = n + 1;
        printf("%d \n", n);
    } */

    // ❓check whether the citizen is an adult or not
    /* int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    // There is two possibility
    // 1) age >=18
    if (age >= 18)
    {
        printf("citizen is adult");
    }
    else
    {
        printf("citizen is not adult");
    } */

    // 2) age<18
    /* int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("citizen is not adult");
    }
    else
    {
        printf("citizen is adult");
    } */

    // SELF STUDY

    // ❓convert temperature from celsius to Fahrenheit
    // formula = Celsius * 1.8 + 32
    /* int Celsius;
    printf("Enter celsius temp : ");
    scanf("%d", &Celsius);

    float toFah = Celsius * 1.8 + 32;
    printf("%f", toFah); */

    // ❓convert inches to centimeters
    /* int inch;
    printf("Enter inch value : ");
    scanf("%d", &inch);

    float inchToCm = inch * 2.54;
    printf("%f", inchToCm); */

    // ❓convert centimeters to inches
    /* int cm;
    printf("Enter inch value : ");
    scanf("%d", &cm);

    float cmToInch = cm / 2.54;
    printf("%f", cmToInch); */

    // ❓ print first 5 odd and even numbers
    // int number = 10;
    /* for (int number = 0; number <= 10; number++)
    {
        // ODD is not divisible by 2 it will return 1 reminder
        if (number % 2 == 1)
        {

            printf("odd number %d \n", number);
        }
        // else rest is even number which is divisible by 2 and return 0 reminder
        else
        {
            printf("Even number %d \n", number);
        }
    } */

    // ❓ find area of a rectangle
    // formula = area = length * width
    /* int length, width;
    printf("Enter length : ");
    scanf("%d", &length);

    printf("Enter width : ");
    scanf("%d", &width);

    int area = length * width;
    printf("total area of rectangle is %d", area); */

    // ❓ convert the distance entered in KM to Meters
    // 1km = 1000 meter
    /* int km, meter;
    printf("Enter km distance : ");
    scanf("%d", &km);

    meter = km * 1000;
    printf("%d meter", meter); */

    return 0;
}