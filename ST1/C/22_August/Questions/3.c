// Write a program to copy contents from one file to another

#include <stdio.h>

int main()
{
    FILE * fptr = fopen("file1.txt","w+");
    FILE * fptr2 = fopen("file2.txt","w+");

    if (fptr == NULL)
    {
        return 0;
    }
    if (fptr2 == NULL)
    {
        return 0;
    }

    char words[100];

    scanf("%[^\n]%*c",words);

    fprintf(fptr,"%s",words);

    rewind(fptr);

    char c = fgetc(fptr);
    while(c!=EOF)
    {
        fputc(c,fptr2);
        c = fgetc(fptr);
    }

    fclose(fptr);
    fclose(fptr2);

    return 0;
}