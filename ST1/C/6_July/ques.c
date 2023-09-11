// Sort struct Student according to their score and finally display the roll numbers of all the students

#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[50];
    int marks;
} Student;

void sortAccordingMarks(Student students[], int n)
{
    // bubble sort
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (students[j].marks > students[j+1].marks)
            {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void printNames(Student students[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%s\n",students[i].name);
    }
}

int main()
{
    Student students[10];
    for (int i=0;i<10;i++)
    {
        scanf("%s", students[i].name);
        scanf("%d",&students[i].marks);
    }

    sortAccordingMarks(students,10);
    printNames(students,10);
    return 0;
}