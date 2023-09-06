#include <stdio.h>

// #define A 5
#ifdef A
    #error Further compilation won't happen
#endif

int main()
{
    printf("%d",10);
    return 0;
}