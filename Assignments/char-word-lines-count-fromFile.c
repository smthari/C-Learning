#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char ch;
    int wrd = 1, charctr = 1;
    char fname[20];
    printf("\n\n Count the number of words and characters in a file :\n");
    printf("---------------------------------------------------------\n");
    printf(" Input the filename to be opened : ");
    scanf("%s", fname);

    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf(" File does not exist or can not be opened.");
    }
    else
    {
        ch = fgetc(fptr);
        printf(" The content of the file %s are : ", fname);
        while (ch != EOF)
        {
            printf("%c", ch);
            if (ch == ' ' || ch == '\n')
            {
                wrd++;
            }
            else
            {
                charctr++;
            }
            ch = fgetc(fptr);
        }
        printf("\n The number of words in the  file %s are : %d\n", fname, wrd - 2);
        printf(" The number of characters in the  file %s are : %d\n\n", fname, charctr - 1);
    }
    fclose(fptr);
}

// Output
/* Count the number of words and characters in a file :
---------------------------------------------------------
Input the filename to be opened : txt1.txt
The content of the file txt1.txt are : my name is sumit
new content
The number of words in the  file txt1.txt are : 5
The number of characters in the  file txt1.txt are : 23 */