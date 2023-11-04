//
// Created by DELL on 03/11/2023.
//

/*
Find whether arr2[] is a subset of arr1[] or not.
 Both arrays are not in sorted order. It may be
assumed that elements in both arrays are distinct.

 Examples:

Input: arr1[] = {11, 1, 13, 21, 3, 7}, arr2[] = {11, 3, 7, 1}
Output: arr2[] is a subset of arr1[]
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    int * arr2 = new int[m];

    for (int i=0;i<m;i++) {
        cin >> arr2[i];
    }

    int i=0,j=0;

    sort(arr, arr+n);
    sort(arr2, arr2+m);

    while (i < n && j < m) {
        if (arr[i] < arr2[j]) {
            i++;
        } else if (arr2[j] == arr[i]) {
            i++;
            j++;
        } else {
            cout << "false" << endl;
            return 0;
        }
    }

    if (j==m) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
