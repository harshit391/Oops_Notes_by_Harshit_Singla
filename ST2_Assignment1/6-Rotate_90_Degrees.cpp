//
// Created by DELL on 02/11/2023.
//


/*
 * Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int ** arr = new int*[n];
    for(int i=0;i<n;i++) {
        arr[i] = new int[m];
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=m-1;i>=0;i--) {
        for (int j=0;j<n;j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}