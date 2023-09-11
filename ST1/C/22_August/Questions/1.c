#include <stdio.h>

// Write a program to count no. of Words in file

int main()
{
    FILE * fptr = fopen("sample.txt","r+");

    if (fptr == NULL)
    {
        return 0;
    }

    // Initialize Word count to 0
    int words = 0;

    // Set boolean inword to false
    int inword = 0;

    // Getting character from file one by one
    char c = fgetc(fptr);

    while(c!=EOF)
    {
        c = fgetc(fptr);
        if (c==' ' || c=='\n' || c=='\t' || c=='\r')
        {
            // We are not inside the word
            inword = 0;
        }

        else{
            // Now we are inside the word
            if (!inword) {
                // Set Inword to True
                inword = 1;

                // Increment words by 1
                words++;
            }
        }
    }

    printf("%d\n",words);


}