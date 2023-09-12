//
// Created by DELL on 12/09/2023.
//

#include <iostream>

using namespace std;

void print(int a[], int n)
{
//    int n = sizeof(a)/sizeof(a[0]);
//    we can't do it because array is passed using reference so it is not possible we should get length of array as a function parameter

    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}

void update(int a[])
{
    a[2] = 100;
}


int main()
{
    int arr[] = {1,2,3,4,5};

    print(arr, sizeof(arr)/sizeof(arr[0]));
    cout<<endl;
    update(arr);
    print(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}


