//
// Created by DELL on 25/09/2023.
//
#include <iostream>

using namespace std;

void conquer(int start, int end, int mid, int * arr,int * b, int * c){
    int i = start;
    int j = mid+1;
    int k = start;

    while (i<=mid && j<=end)
    {
        if (b[i]>c[j]) {
            arr[k++] = c[j++];
        }

        else {
            arr[k++] = b[i++];
        }
    }

    while (i<=mid) {
        arr[k++] = b[i++];
    }

    while (j<=end) {
        arr[k++] = c[j++];
    }
}

void divide(int start, int end, int * arr)
{
    if (start>=end) return;

    int mid = start + (end-start)/2;

    int b[100],c[100];

    for (int i=start;i<=mid;i++){
        b[i] = arr[i];
    }

    for (int i=mid+1;i<=end;i++){
        c[i] = arr[i];
    }

    divide(start,mid,b);
    divide(mid+1,end,c);

    conquer(start,end,mid,arr,b,c);
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};

    int n = sizeof(arr)/sizeof(int);

    divide(0,n-1,arr);

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;

}