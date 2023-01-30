#include <ctype.h>

int main()
{
    // counter for the loop
    int i = 0;

    // word to convert to uppercase
    char word[] = "edUcaTivE\n";
    char chr;

    // Loop
    while (word[i])
    {
        chr = word[i];
        printf("%c", toupper(chr));
        i++;
    }

    return 0;
}