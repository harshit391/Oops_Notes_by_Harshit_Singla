//
// Created by DELL on 29/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Complex{
    int real,imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex X) const {
        return {X.real + real, X.imag + imag};
    }

    void display() const {
        cout << real << "+i" << imag << endl;
    }
};

int main() {
    Complex c1{1,2};
    Complex c2{3,4};

    Complex c3 = c1+c2;

    c3.display();
}
