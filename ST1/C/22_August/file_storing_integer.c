#include <stdio.h>

int main()
{
    FILE * fptr = NULL;
    fptr = fopen("abc.txt","w+");

    if (fptr==NULL)
    {
        printf("File not Found!\n");
        return 0;
    }


    // It will just print the value in abc.txt file i.e store our value in txt file
    fprintf(fptr, "%s" ,"Keshav");

    // Tells us the position of seek 
    // printf("%d\n",ftell(fptr));

    rewind(fptr); // send our pointer back to 0

    // To print a character from txt file
    char c = fgetc(fptr);
    printf("%c\n",c);

    fclose(fptr);



    return 0;
}