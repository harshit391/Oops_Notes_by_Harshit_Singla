#include <stdio.h>

typedef union Dis
{
    int dis1;
    long long int dis2;

} Dis;

int main()
{

    Dis d1;

    d1.dis1 = 100000;
    d1.dis2 = 21474836487;

    printf("%d\n", d1.dis1);
    printf("%lld\n", d1.dis2); // Either give dis1 value or garbage value


    // It will print size of largest number in the union
    printf("%d\n", sizeof(union Dis));
    return 0;
}