#include <stdio.h>

int main()
{
    FILE * fptr = NULL;
    fptr = fopen("abc.txt","a");

    if (fptr==NULL)
    {
        printf("File not Found!\n");
        return 0;
    }
    // printf("File is Created if not present, otherwise opened for overWriting\n");

    // char ch[1000] = {'\0'};

    // // fscanf --> Will take input untilll it encounters a space 
    // fscanf(fptr,"%s", ch);

    // // Takes input from file upto mentioned number of characters or until it encounters a newline character
    // fgets(ch, 100 , fptr);

    // printf("%s\n",ch);
    // fclose(fptr);

    char ch = 'A';

    // First arg ch , second arg file pointer
    fputc(ch, fptr);

    char ch1[100] = "Appending New Line";
    fputs(ch1, fptr);

    fclose(fptr);

    return 0;
}