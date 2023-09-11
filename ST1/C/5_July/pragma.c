#include <stdio.h>

// Its just a normal function we want to run it before main function 
// Not working in present times
#pragma startup_func()

void startup_func()
{
    printf("pragma");
}

int main()
{
    
    return 0;
}
    