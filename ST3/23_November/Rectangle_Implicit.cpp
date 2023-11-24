//
// Created by DELL on 23/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Rectangle {
public:
    int length;
    int width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    operator int() {
        return length * width;
    }

    operator double() {
        return 1.01 * length * width;
    }
};

int main() {
    Rectangle r(2,3);
    int x = r;
    cout << x << endl;

    double y = r;
    cout << y << endl;
    return 0;

}