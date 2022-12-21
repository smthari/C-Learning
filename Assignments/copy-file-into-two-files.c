#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    char fname[100], c;

    printf("File to copy from :");
    scanf("%s", fname);
    fptr1 = fopen(fname, "r");

    printf("File to copy in :");
    scanf("%s", fname);
    fptr2 = fopen(fname, "w");

    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("Contents copied into %s", fname);

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}