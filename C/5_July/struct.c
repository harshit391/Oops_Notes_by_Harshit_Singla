#include <stdio.h>
#include <string.h>

// syntax --> 1
// struct StructureName {members};
// It doesn't have any memory untill it is allocated to a variable because it is a datatype in its own
struct Student {
    char name[50];
    int rollno;
    float gpa;
};

// syntax --> 2
// definition of structure + declaration of structer variables
struct Parent {
    char name[50];
    // int age = 24; we cant initialize there
    int age;
} parent1, parent2, parents[10];

int main()
{
    // syntax --> 1
    // struct structureName structureVaribale/s;
    struct Student student1; // declaration

    // definition
    // to access members of a structure we use dot(.) operator

    // student1.name[50] = "Harshit"; It will give error because we cant assign value to a array
    strcpy(student1.name,"Harshit");
    student1.rollno = 1;
    student1.gpa = 9.3;

    // priniting values of structure

    printf("%s\n",student1.name);
    printf("%d\n",student1.rollno);
    printf("%.1f\n",student1.gpa);

    printf("\n\n");

    // syntax --> 2
    struct Student student2 = {"Sajneet",2,9.6};
    printf("%s\n",student2.name);
    printf("%d\n",student2.rollno);
    printf("%.1f\n",student2.gpa);

    printf("\n\n");

    // We can't assign value to character arrray i.e String Directly so we use strcpy method from String.h library to do so
    strcpy(parent1.name, "Keshav");
    parent1.age = 57;
    
    strcpy(parents[3].name, "Nikhil");
    parents[3].age = 47;

    printf("%s\n",parents[3].name);
    printf("%s\n",parent1.name);
    printf("%d\n",parents[3].age);
    printf("%d\n",parent1.age);


    return 0;
}

