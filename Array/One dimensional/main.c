#include <stdio.h>

// one dimensional array example
int main() {
    int a[2];
    for (int i=0; i<2; i++) {
            printf("Enter value :");
            scanf("%d", &a[i]);
            printf("%i\n", a[i]);
    }
    return 0;
}