//
// Created by DELL on 14/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int * aptr = &a;

    cout << aptr + 1 << endl; // => Gives size of next block

    return 0;
}