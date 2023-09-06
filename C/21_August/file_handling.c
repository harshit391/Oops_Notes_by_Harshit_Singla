#include <stdio.h>

int main()
{
    // fopen --> takes two arguements
    // first is file name
    // second is mode
    // its return type is FILE * pointer

    // FILE --> can be considered like datatypes

    /* ---------------------------------------- READ ----------------------------------------------*/

    // FILE * fptr = NULL;
    // fptr = fopen("abc.txt","r"); // Takes arguements in character array i.e. string

    // if (fptr==NULL)
    // {
    //     printf("File not Found!\n");
    //     return 0;
    // }

    // fclose(fptr); // Close the opened file and save the current status 

    /* ---------------------------------------- WRITE ----------------------------------------------*/

    // FILE * fptr = NULL;
    // fptr = fopen("abc.txt","w");

    // if (fptr==NULL)
    // {
    //     printf("File not Found!\n");
    //     return 0;
    // }
    // printf("File is Created if not present, otherwise opened for overWriting");

    // // fprintf
    // fprintf(fptr, "This will be Written Inside file\n");
    // fclose(fptr);

    /* ---------------------------------------- APPEND ----------------------------------------------*/
    
    FILE * fptr = NULL;
    fptr = fopen("abc.txt","a");

    if (fptr==NULL)
    {
        printf("File not Found!\n");
        return 0;
    }
    printf("File is Created if not present, otherwise opened for overWriting");

    // fprintf
    fprintf(fptr, "This will be Written Inside file\n");
    fclose(fptr);

    return 0;
}