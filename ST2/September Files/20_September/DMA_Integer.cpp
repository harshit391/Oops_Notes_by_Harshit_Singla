//
// Created by DELL on 20/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    // Allocate memory in heap
    int *a = new int;

    // To give value we have to first dereference the variable and then set value for it
    *a = 5;

    // If we try to print variable as it is it will give address of the memory allocated for it in heap
    cout << a << endl;

    // This will dereference the variable, and we get value on that address of variable
    cout << *a << endl;
    return 0;
}
