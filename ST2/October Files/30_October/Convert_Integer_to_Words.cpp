//
// Created by DELL on 30/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

void word(int n) {
    switch (n) {
        case 0:
            cout << "zero" << " ";
            break;
        case 1:
            cout << "one" << " ";
            break;
        case 2:
            cout << "two" << " ";
            break;
        case 3:
            cout << "three" << " ";
            break;
        case 4:
            cout << "four" << " ";
            break;
        case 5:
            cout << "five" << " ";
            break;
        case 6:
            cout << "six" << " ";
            break;
        case 7:
            cout << "seven" << " ";
            break;
        case 8:
            cout << "eight" << " ";
            break;
        case 9:
            cout << "nine" << " ";
            break;
    }
}

void print(int n) {
    if (n==0) return;
    print(n/10);
    word(n%10);
}

int main() {
    int n;
    cin >> n;

    print(n);
}
