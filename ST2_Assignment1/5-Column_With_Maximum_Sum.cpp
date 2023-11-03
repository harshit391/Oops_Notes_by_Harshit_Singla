//
// Created by DELL on 02/11/2023.
//

/*
 * Given a N*N matrix.
 *
 * The task is to find the index of the column with the maximum sum.
 *
 * That is the column whose sum of elements is maximum.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int ** arr =  new int*[n];
    for (int i=0; i<n; i++) {
        arr[i] = new int[m];
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    int max = -1000000;
    int idx = 0;
    for (int i=0;i<m;i++) {
        int sum = 0;
        for (int j=0;j<n;j++) {
            sum += arr[j][i];
        }
        if (sum > max) {
            idx = i;
            max = sum;
        }
    }

    cout << idx << endl;

    return 0;
}

