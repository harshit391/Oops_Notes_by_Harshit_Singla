#include <stdio.h>

#define print(x) printf(#x)

#define greet(p1, p2) \
    printf("Hello " #p1 "and " #p2 "\n");


int main()
{
    int a = 10;

    float PI = 3.14159;

    // It will print name of varible itself
    print(a);  //=> a
    printf("\n");
    print(PI); //=> PI
    printf("\n");

    greet(Harshit,Sajneet);
    printf("\n");

    return 0;
}