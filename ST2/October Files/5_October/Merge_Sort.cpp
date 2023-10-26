#include <iostream>

using namespace std;

void conquer(int start, int mid, int end, int * arr, int n) {
    int * arr2 = new int[n];

    int idx = 0;

    int idx1 = start;
    int idx2 = mid;
    int idx3 = 0;

    while (start < mid && mid < end) {
        if (arr[idx1] > arr[idx2]) {
            arr2[idx3++] = arr[idx1++];
        }

        else if (arr[idx1] < arr[idx2]) {
            arr[]
        }
    }
}

void divide (int start, int end, int * arr, int n) {
    if (start <= end) return;

    int mid = start + (end-start)/2;

    divide(start,mid,arr,n);
    divide(mid+1,end,arr,n);
    conquer(start, mid, end, arr, n);
}

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }




}