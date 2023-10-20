//
// Created by DELL on 20/09/2023.
//
#include <iostream>

using namespace std;

int main()
{
    // This will allocate a bucket in heap memory of array in a pointer
    int * a = new int[100];

    // Now we can easily Access it like a normal array just the declaration is something different
    for (int i=0;i<100;i++){
        a[i] = i+1;
    }

    // ANd also print it like a normal array too
    for (int i=0;i<100;i++) {
        cout << a[i] << " ";
    }

    return 0;
}
