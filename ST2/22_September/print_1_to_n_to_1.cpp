//
// Created by DELL on 22/09/2023.
//

#include <iostream>

using namespace std;

void print1(int n)
{
    if (n==0) {
        return;
    }
    cout << n << endl;
    print1(n-1);
}

void print2(int n)
{
    if (n==0) {
        return;
    }
    print2(n-1);
    cout << n << endl;
}

int main()
{
    int n = 5;

    print2(n);
    print1(n);

    return 0;
}