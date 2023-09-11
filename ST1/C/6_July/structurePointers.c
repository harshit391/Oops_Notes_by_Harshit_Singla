#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int rollNo;
} Stu;


int main()
{
    // pointers syntax
    // data_type * pointerName = &variable
    struct Student student1 = {"Harshit",391};
    Stu student2 = {"Keshav",1234};

    struct Student * student1ptr = &student1;
    Stu * student2ptr = &student2;

    printf("%x\n", student1ptr);
    printf("%x\n", student1.name);

    // * dereferencing a structure

    strcpy((*student1ptr).name,"Nikhil");

    printf("%s\n",student1ptr->name);
    return 0;
}

