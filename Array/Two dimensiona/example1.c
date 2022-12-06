#include <stdio.h>

// two dimensional array example 1
int main() {
    int a[2][3] = {45,65,12,5,6,4};
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            // printf("Enter value :");
            // scanf("%d", &a[i][j]);
            // printf("%i\n", a[i][j]);
            printf("a[%d] [%d] = %d \n",i,j,a[i][j]);    
        }
        
    }
    return 0;
}