//
// Created by DELL on 01/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n<=2) {
        cout << " NO ELEMENTS " << endl;
        return 0;
    }

    int * arr = new int[n];
    vector<int> arr2;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for (int i=1;i<n-1;i++) {
        if (arr[i-1] < arr[i] && arr[i-1] < arr[i+1]) {
            arr2.push_back(arr[i-1]);
        }
    }

    for (int i : arr2) {
        cout << i << " ";
    }

    return 0;
}
