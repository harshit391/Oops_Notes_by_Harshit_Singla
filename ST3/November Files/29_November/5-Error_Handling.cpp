//
// Created by DELL on 29/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int idx;
    cin >> idx;


    try{
        if (idx >= n) {
            throw ("Array Index out of Bounds");
        }
        if (idx < 0) {
            throw ("Negative Index");
        }
        cout << "Element in array at index " << idx <<  " is " << arr[idx] << endl;
    } catch(const char * e) {
        cout << e << endl;
    }

    cout << __gcd(5,1) << endl;
}