#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length;
    int flag = 0; // false

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1; // true
        }
    }

    if (flag == 1)
    {
        printf("%s is not palindrome string", string1);
    }
    else
    {
        printf("%s is palindrome string", string1);
    }

    return 0;
}
