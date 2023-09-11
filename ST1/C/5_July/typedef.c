#include <stdio.h>

// typedef datatype alias_name/nick_name
typedef int i;

typedef struct student
{
    char name[50];
    long long int rollno;
    float gpa;
} Stu;


int main()
{
    i a=5;
    Stu student1;
    printf("%d\n",a);

    student1.rollno = 19110145520;

    printf("%lld\n",student1.rollno);

    return 0;
}