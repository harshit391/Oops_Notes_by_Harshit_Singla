//
// Created by DELL on 19/09/2023.
//

#include <iostream>

using namespace std;

/**
 * The concept of Overloading stats that if the same name of function with different arguments will be being made
 * Then it will be automatically decided which function to be called just be recognizing the parameters
 */

// Prototype --> If we want to make our function after the main function then we should declare its prototype
// it tells that somewhere in the entire code this function has been defined

// It helps us to declare prototype at top and then declare the function anywhere in the code as per we wanted
void add(int,int);

// Now as the add function in already defined but will three arguments this time which is called overloading
void add(int,int,int);

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    // This time automatically systems call the add function with three arguments
    add(1,2,3);

    // And Also time of this function call automatically system will execute add function with two arguments
    add(1,2);

    return 0;
}

// Our main add functions whose prototype has been defined at the start
void add(int a, int b)
{
    cout << a+b << endl;
}

void add(int a, int b, int c)
{
    cout << a+b+c << endl;
}