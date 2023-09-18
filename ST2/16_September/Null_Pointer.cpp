//
// Created by DELL on 18/09/2023.
//

#include <iostream>

using namespace std;

int main()
{

    int a = 5;

    // Declaration of a Null pointer
    int *aptr = NULL;

    // It will help to print the value of a
    cout << a << endl;

    // If we try to print this, It will give error
    cout << *(aptr) << endl;

    return 0;
}