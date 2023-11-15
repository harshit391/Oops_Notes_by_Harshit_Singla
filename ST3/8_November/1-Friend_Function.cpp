//
// Created by DELL on 08/11/2023.
//
#include <bits/stdc++.h>

using namespace std;

class Complex{
private:
    int real;
    int imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void display() const {
        if (imag>=0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }

    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator*(Complex, Complex);
    friend Complex operator/(Complex, Complex);
};

Complex operator+(Complex X1, Complex X2) {
    return {X1.real + X2.real, X1.imag + X2.imag};
}

Complex operator-(Complex X1, Complex X2) {
    return {X1.real - X2.real, X1.imag - X2.imag};
}

Complex operator*(Complex X1, Complex X2) {
    return {X1.real * X2.real - X1.imag * X2.imag, X1.real * X2.imag - X1.imag * X2.real};
}

Complex operator/(Complex X1, Complex X2) {
    int new_real = (X1.real * X2.real + X1.imag * X2.imag)/(X1.real * X1.real + X1.imag * X1.imag);
    int new_imag = (X1.imag * X2.real - X1.real * X2.imag)/(X1.real * X1.real + X1.imag * X1.imag);
    return {new_real, new_imag};
}



int main(){
    Complex n1(100,50);
    n1.display();

    Complex n2(200,50);
    n2.display();

    Complex n3 = n1 / n2;
    n3.display();

    return 0;
}