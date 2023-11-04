//
// Created by DELL on 04/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

void split(int * arr, int * out1, int * out2, int i, int j, int k, int n) {
    if (i == n) {
        int left = 0;
        for (int p = 0; p < j; p++) {
            left += out1[p];
        }

        int right = 0;
        for (int h = 0; h < k; h++) {
            right += out2[h];
        }

        if (left == right) {
            for (int l=0; l<j; l++) {
                cout << out1[l] << " ";
            }
            cout << "and ";
            for (int m=0; m<k; m++) {
                cout << out2[m] << " ";
            }
            cout << endl;
        }
        return;
    }

    out1[j] = arr[i];
    split(arr, out1, out2, i+1, j+1, k, n);
    out2[k] = arr[i];
    split(arr, out1, out2, i+1, j, k+1, n);
}

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int * out1 = new int[1000];
    int * out2 = new int[1000];

    split(arr, out1, out2, 0, 0, 0, n);

    return 0;
}