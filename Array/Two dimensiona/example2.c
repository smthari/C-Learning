#include <stdio.h>

// two dimensional array example #2
int main() {
    int a[2][3];
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter value :");
            scanf("%d", &a[i][j]);
            printf("%i\n", a[i][j]);
        }
    }
    return 0;
}