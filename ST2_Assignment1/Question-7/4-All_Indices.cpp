//
// Created by DELL on 03/11/2023.
//

/*
 * Find all the indices of the target element in the array
*/

#include <bits/stdc++.h>

using namespace std;

void allindices(int * arr, int index, int target) {
    if (index == -1) {
        return;
    }

    allindices(arr, index-1, target);

    if (arr[index] == target) {
        cout << index << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    allindices(arr, n-1, target);

    return 0;
}