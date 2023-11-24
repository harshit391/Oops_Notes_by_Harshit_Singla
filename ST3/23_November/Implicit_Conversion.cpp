//
// Created by DELL on 23/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class A {
    int x;
public:
    /*
     * By explicit We can't do Implicit Conversion
    explicit A(int x) {
        this->x = x;
    }
     */
    A(int x) {
        this->x = x;
    }
    void display() const {
        cout << "A: " << x << endl;
    }
};

int main() {
    A a(123);
    A b = 234;  /* This is called Implicit Conversion*/
    a.display();
    b.display();
    return 0;
}
