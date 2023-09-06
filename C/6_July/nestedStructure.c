#include <stdio.h>
#include <string.h>

// Seperate Nesting
typedef struct Child
{
    char name[50];
    int age;
} Child;

typedef struct Parent
{
    char name[40];
    int age;
    Child child1; // But the structure should be present above the Parent
} Parent;

int main()
{
    Parent parent1 = {"Mohan",45};
    strcpy(parent1.child1.name,"Harshit");

    printf("%s",parent1.child1.name);
    return 0;
}