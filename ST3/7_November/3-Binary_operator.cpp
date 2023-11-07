//
// Created by DELL on 07/11/2023.
//

/*
 * Binary Operators are operators which operate on more than one operand
 *
 * We can overload those operators to apply them on two classes
 *
 * Operators are :- + - / *
 */


#include <bits/stdc++.h>

using namespace std;

class Complex{
    int real;
    int imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex X) const {
        return {real + X.real, imag + X.imag};
    }

    Complex operator-(Complex X) const {
        return {real - X.real, imag - X.imag};
    }

    Complex operator*(Complex X) const {
        return {real * X.real - imag * X.imag, real * X.imag - imag * X.real};
    }

    Complex operator/(Complex X) const {
        int deno = X.real * X. real + X.imag * X.imag;
        int new_real = (real * X.real - imag * X.imag)/deno;
        int new_imag = (real * X.imag - imag * X.real)/deno;
        return {new_real, new_imag};

    }

    void display() const {
        if (imag>=0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};

int main(){
    Complex n1(10,5);
    n1.display();

    Complex n2(20,15);
    n2.display();

    Complex n3 = n1 + n2;
    n3.display();

    Complex n4 = n1 - n2;
    n4.display();

    Complex n5 = n1 * n2;
    n5.display();

    Complex n6 = n1 / n2;
    n6.display();


    return 0;
}

