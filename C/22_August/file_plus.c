#include <stdio.h>

int main()
{
    FILE * fptr = fopen("abc.txt","r+");
    if (fptr == NULL)
    {
        return 0;
    }

    // printf("%d\n", ftell(fptr));
    // rewind(fptr);

    fseek(fptr, 5, SEEK_SET); // If negetive by default come to 0

    fprintf(fptr, "%s", "Harshit");
    fclose(fptr);

    return 0;
}