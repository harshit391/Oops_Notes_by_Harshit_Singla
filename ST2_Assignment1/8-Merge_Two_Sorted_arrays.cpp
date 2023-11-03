//
// Created by DELL on 02/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

void merge(const int * arr1, const int * arr2, int n1, int n2){
    int * arr = new int[n1+n2];

    int idx1 = 0;
    int idx2 = 0;
    int idx3 = 0;

    while (idx1 < n1 && idx2 < n2) {
        if (arr1[idx1] > arr2[idx2]) {
            arr[idx3++] = arr2[idx2++];
        }
        else {
            arr[idx3++] = arr1[idx1++];
        }
    }

    while (idx1 < n1) {
        arr[idx3++] = arr1[idx1++];
    }

    while (idx2 < n2) {
        arr[idx3++] = arr2[idx2++];
    }

    for (int i=0;i<n1+n2;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {
    int n;
    cin >> n;
    int * arr1 = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int * arr2 = new int[m];

    for (int i=0;i<n;i++) {
        cin >> arr2[i];
    }

    merge(arr1, arr2, n, m);

    return 0;
}