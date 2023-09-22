//
// Created by DELL on 22/09/2023.
//

#include <iostream>

using namespace std;

int find(int *arr, int i, int n, int target)
{
    if (i==n) return -1;

    if (arr[i]==target) return i;
    return find(arr,i+1,n,target);
}

int main()
{
    int arr[] = {1,2,7,4,5,};

    int n = sizeof(arr)/sizeof(int);

    cout << find(arr,0,n,7);

    return 0;
}