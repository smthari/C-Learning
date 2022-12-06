#include <stdio.h>

int main()
{

    // array declaration
    /* int a[2]; // a[0] , a[1]
    printf("%i \n", a[0] = 25);
    printf("%i \n", a[1] = 35); */

    // int a[2] = {25, 35};
    // printf("%i \n", a[0]);
    // printf("%i \n", a[1]);

    // accessing array element - one dimensional array
    /* int a[3] = {23, 16, 36};
    printf("%d \n", a[0]); // 23
    printf("%d \n", a[1]); // 16
    printf("%d \n", a[2]); // 36 */

    // accessing array element - two dimensional array
    /* int a[2][3] = {45, 65, 12, 5, 6, 4};

    printf("%d \n", a[0][0]); // 23
    printf("%d \n", a[0][1]); // 16
    printf("%d \n", a[0][2]); // 36
    printf("%d \n", a[1][0]); // 36
    printf("%d \n", a[1][1]); // 36
    printf("%d \n", a[1][2]); // 36 */

    // Ways to Initializing Two – Dimensional Array
    // first method
    // int a[2][3] = {45,65,12,5,6,4};

    // second method
    // int a[2][3] = {{45, 65, 12}, {5, 6, 4}};

    // third method using for loop
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value :");
            scanf("%d", &a[i][j]);
            printf("%i\n", a[i][j]);
        }
    }

    return 0;
}
