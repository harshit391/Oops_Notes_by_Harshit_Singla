#include <stdio.h>

void sum(int a, int b)
{
    printf("%d\n", a+b);
}

void sum(int a, float b)
{
    printf("%.2f\n", a+b);
}

int main()
{
    int a = 10,b=20;

    sum(a,b);

    float c = 1.69;

    sum(a,c);


}