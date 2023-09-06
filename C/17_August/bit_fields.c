#include <stdio.h>

typedef struct Cal{
    unsigned int day : 5;
    unsigned int : 0; // Used for memory Alignment to sepearate day and month in seperate buckets
    unsigned int month : 4;
    unsigned int : 0; // No effect as already memory aligned there 
    int year;
} Cal;

int main()
{
    Cal cal1 = {17,8,2023};

    printf("%d %d %d\n", cal1.day, cal1.month, cal1.year);
    printf("%d\n",sizeof(cal1));
}