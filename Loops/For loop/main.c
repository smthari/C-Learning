#include <stdio.h>

// Print a to z alphabet character using for loop
int main() {
    char alph;
    for (alph='a'; alph<='z'; alph++) {
        printf("%c", alph);
    }
    return 0;
}