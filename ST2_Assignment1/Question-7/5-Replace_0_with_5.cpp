//
// Created by DELL on 03/11/2023.
//

/*
 * Given an Integer
 *
 * Replace all 0 in it with 5
 */

#include <bits/stdc++.h>

using namespace std;

int replace(int n) {
    if (n == 0) {
        return 0;
    }

    int c = n%10;
    if (c == 0) {
        c = 5;
    }



    return replace((n/10)) * 10 + c;
}

int main() {
    int n;
    cin >> n;

    cout << replace(n) << endl;

    return 0;
}
