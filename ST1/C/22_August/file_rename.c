#include <stdio.h>

int main()
{
    FILE * fptr = fopen("a.txt","r+");

    if (fptr == NULL) return 0;

    fclose(fptr);

    char old_name[] = "a.txt";
    char new_name[] = "b.txt";

    rename(old_name,new_name);



    return 0;
}