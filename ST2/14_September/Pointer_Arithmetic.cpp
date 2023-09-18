//
// Created by DELL on 14/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int * aptr = &a;

    cout << aptr + 1 << endl; // => Gives Starting address of next block where this aptr is being stored

    return 0;
}