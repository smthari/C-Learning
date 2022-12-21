#include <stdio.h>

int main()
{
    char letter;
    printf("Enter letter to check vowel : ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
        printf("a is vowel ");
        break;

    case 'e':
        printf("e is vowel ");
        break;

    case 'i':
        printf("i is vowel ");
        break;

    case 'o':
        printf("o is vowel ");
        break;

    case 'u':
        printf("u is vowel ");
        break;

    default:
        printf("%c is not vowel", letter);
        // break;
    }
}

// Output 
/* Enter letter to check vowel : a
a is vowel  */