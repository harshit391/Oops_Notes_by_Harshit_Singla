#include <stdio.h>

// #define A 5
#ifdef A /* Intended Error displayed on terminal , Intentional from user not from system */
    #error Further compilation won't happen
#endif

int main()
{
    printf("%d",10);
    return 0;
}