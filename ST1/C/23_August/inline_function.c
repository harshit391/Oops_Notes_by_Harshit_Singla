#include <stdio.h>

inline static int sq(int a)
{
    return a*a;
}

int main()
{
    int s;
    scanf("%d",&s);

    printf("%d",sq(s));

    return 0;
}