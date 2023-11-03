//
// Created by DELL on 03/11/2023.
//

/*
 * Find the last index of the target element in the array
*/

#include <bits/stdc++.h>

using namespace std;

int lastindex(int * arr, int index, int target) {
    if (index == -1) {
        return -1;
    }

    if (arr[index] == target) {
        return index;
    }

    return lastindex(arr, index - 1, target);
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

    cout << lastindex(arr, n-1, target) << endl;

    return 0;
}