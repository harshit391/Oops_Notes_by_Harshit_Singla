#include <stdio.h>

int main()
{
    int a = 5;

    const int * aptr;

    aptr = &a;

    a++;

    // (*aptr)++; // It will give error because aptr see a as a constant integer 
    // Note It only matters that which thing we are using to change the value is of which type
    // Mean if we are using aptr to change the value then which type is of aptr is only the thing that matters

    printf("%d\n",*aptr);

    const int b = 10;

    int * const bptr = &b;

    (*bptr)++;

    printf("%d\n",b);

    int c = 10;

    const int * const cptr = &c;

    printf("%d",*cptr);
}