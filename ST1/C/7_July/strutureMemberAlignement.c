#include <stdio.h>

typedef struct A
{
    char a;     // 1
    int b;      // 4
    double c;   // 8
} A;

typedef struct B
{
    char a;     // 1
    double c;   // 8
    int b;      // 4
} B;

struct C
{
    double c;   // 8
    char a;     // 1
    int b;      // 4
}__attribute__((packed));

int main()
{

    // Size of struct is a multiple to size of largest data structure in a struct
    printf("%d\n",sizeof(A));
    printf("%d\n",sizeof(B));
    printf("%d\n",sizeof(struct C));

    return 0;
}