//
// Created by DELL on 30/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    try {
        if (b == 0) {
            throw 1.1;
        } cout << "a/b is " << a/b << endl;
    } catch(...) {
        /* Any type of exception occurs this block get executed */
        cout << "An Exception occur" << endl;
    }

    cout << "Rest of the code" << endl;

    return 0;
}