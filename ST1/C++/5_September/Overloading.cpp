#include <stdio.h>

// Overloading is a C++ programming feature that allows us to have more than one function having same name but different parameter list. 
// The parameter list, in this case, includes the data type and sequence of the parameters.

// For example

// There is a function of sum which add two integer
// Let this function be sum1
void sum(int a, int b)
{
    printf("%d\n", a+b);
}

// But there is a function of sum which add one integer and other float value
// This is actually called Overloading
// Let this function be sum2
void sum(int a, float b)
{
    printf("%.2f\n", a+b);
}

int main()
{
    int a = 10,b=20;

    // When this function called sum1 function got allocated in stack as we are passing two integers
    // So it automatically detects which function is actually been called
    sum(a,b);

    float c = 1.69;

    // Where when this function called sum2 function got allocated in stack as we are passing one integer and other float value
    // So it automatically detect the change and switch to another function 
    sum(a,c);


}