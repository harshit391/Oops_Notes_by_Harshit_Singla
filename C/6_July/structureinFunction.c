#include <stdio.h>
#include <string.h>

typedef struct Student{
        char name[50];
        int rollNo;
} stu;

void changeName(struct Student student1)
{
    strcpy(student1.name, "Sajneet");
    printf("%s\n",student1.name);

}

void changeRollNo(struct Student student1)
{
    student1.rollNo = 1234;
    printf("%d\n",student1.rollNo);

}

int main()
{
    stu st1 = {"Harshit",391};

    printf("%s\n",st1.name);
    printf("%d\n",st1.rollNo);

    changeName(st1);
    changeRollNo(st1); 

    return 0;
}