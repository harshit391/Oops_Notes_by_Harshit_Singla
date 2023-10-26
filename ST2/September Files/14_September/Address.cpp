//
// Created by DELL on 14/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    float b = 11.1;

    cout << &a << endl;

    int * aptr = &a;

    float * fptr = &b;

    cout << *aptr << endl;
    cout << *fptr << endl;

    // Ox --> Tells that the upcoming value is a Hexadecimal Value
    // Rest is Hexadecimal Value of An Address

    char ch = 'A';

    char * chptr = &ch; // Compiler always give some wrong address for character pointer

    cout << (int *)chptr << endl; // Now it will give right address

    return 0;
}
