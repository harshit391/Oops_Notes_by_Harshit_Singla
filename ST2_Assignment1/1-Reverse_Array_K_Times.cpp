//
// Created by DELL on 02/11/2023.
//

// Reverse the given array k times

#include <bits/stdc++.h>

using namespace std;

void reverse(int* arr, int n) {
    for (int i=0;i<=n/2;i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int n;

    cin >> n;

    int * arr  = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    if (k%2!=0) {
        reverse(arr, n);
    }

    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;


}
