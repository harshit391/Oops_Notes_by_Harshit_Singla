//
// Created by DELL on 17/10/2023.
//

/*
 * A friend function in C++ is a function that is not a member of a class
 * but has access to all private and protected members of the class.
 *
 * Friend functions are declared inside the class definition using the friend keyword.
 *
 * Friend functions are useful in cases where two or more classes need to share private data or functionality.
 *
 * For example, a friend function could be used to overload an operator for a class,
 * or to implement a function that needs to access private data in multiple classes.
 */

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

    // Now as we declared these functions
    friend void add(Complex,Complex);
    friend void multiply(Complex,Complex);
};

// So this Adds function could now access all the private as well as public members of class
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


