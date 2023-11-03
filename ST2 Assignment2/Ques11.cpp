//
// Created by DELL on 03/11/2023.
//

/*
Given a sequence arr[] of size n, Write a function int equilibrium(int[] arr, int n) that returns an
equilibrium index (if any) or -1 if no equilibrium index exists.
The equilibrium index of an array is an index such that the sum of elements at lower indexes is
equal to the sum of elements at higher indexes.

Examples:

Input: A[] = {-7, 1, 5, 2, -4, 3, 0}
Output: 3
3 is an equilibrium index, because:
3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

Input: A[] = {1, 2, 3}
Output: -1
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    int total = 0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        total += arr[i];
    }

    int left = 0;
    for (int i=0;i<n;i++) {
        total -= arr[i];
        if (left == total) {
            cout << i << endl;
            return 0;
        }
        left += arr[i];
    }

    cout << -1 << endl;
    return 0;
}
