//
// Created by DELL on 01/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    int num = 0;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
        num = num^arr[i];
    }

    cout << num << endl;

    return 0;
}
