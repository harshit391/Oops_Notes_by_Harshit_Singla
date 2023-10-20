//
// Created by DELL on 17/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r, int c) {
        real = r;
        imaginary = c;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    friend void add(Complex,Complex);
    friend void multiply(Complex,Complex);
};

void add(Complex c1, Complex c2) {
    int new_real = c1.real + c2.real;
    int new_imaginary = c1.imaginary + c2.imaginary;
    Complex ans(new_real, new_imaginary);
    ans.display();
}

void multiply(Complex c1, Complex c2) {
    int new_real = c1.real* c2.real - (c1.imaginary * c2.imaginary);
    int new_imaginary = c1.real * c2.imaginary + (c1.imaginary * c2.real);
    Complex ans(new_real, new_imaginary);
    ans.display();
}

int main() {
    Complex num1(5,10);
    Complex num2(10,15);

    add(num1, num2);
    multiply(num1, num2);

    return 0;
}


