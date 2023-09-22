//
// Created by DELL on 22/09/2023.
//

#include <iostream>

using namespace std;

int sumofarray(int *arr, int i, int n)
{
    if (i==n) return 0;

    return sumofarray(arr, i+1, n) + arr[i];
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout << "Sum :- " << sumofarray(arr, 0, n);


}
