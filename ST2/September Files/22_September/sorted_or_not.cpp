//
// Created by DELL on 22/09/2023.
//

#include <iostream>

using namespace std;

bool sorted(int *a, int i, int n)
{
    if (i==n-1 or i==n) return true;

    bool cp = sorted(a,i+1,n);
    if (cp==true and a[i]<a[i+1]) return true;
    else return false;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/ sizeof(int);

    if (sorted(a,0,n)==true) cout << "Array is sorted" << endl;

    else cout << "Array is not sorted" << endl;

    return 0;
}
