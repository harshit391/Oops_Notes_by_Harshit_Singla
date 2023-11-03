//
// Created by DELL on 03/11/2023.
//

/*
 * Find the first index of the target element in the array
*/

#include <bits/stdc++.h>

using namespace std;

int firstindex(int * arr, int index, int size, int target) {
    if (index == size) {
        return -1;
    }

    if (arr[index] == target) {
        return index;
    }

    return firstindex(arr, index+1, size, target);
}

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    cout << firstindex(arr, 0, n, target) << endl;

    return 0;
}