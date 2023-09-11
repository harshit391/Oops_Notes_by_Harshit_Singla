#include <stdio.h>

// Write a program to count no. of Lines in file

int main()
{
    FILE * fptr = fopen("sample.txt","r+");

    if (fptr == NULL)
    {
        return 0;
    }

    int words = 1;

    while(1)
    {
        // 0 if seek not at end 1 if seek at end
        if (feof(fptr))
        break;

        char c = fgetc(fptr);
        if (c=='\n') words++;
    }

    printf("%d\n",words);


}