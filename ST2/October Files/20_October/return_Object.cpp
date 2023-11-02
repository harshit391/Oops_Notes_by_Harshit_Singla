//
// Created by DELL on 20/10/2023.
//

/*
 * We always study functions that they can return int , float, double, arr
 *
 * Just Imagine a Function return an Object
 */

#include <bits/stdc++.h>

using namespace std;

// There is a Complex class to display Complex Numbers
class Complex {
private:
    int x;
    int y;

public:
    Complex(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << x << " + " << y << "i" << endl;
    }

    friend Complex add(Complex, Complex);
};

// And there is friend function of return type Complex Object which add two Complex numbers
Complex add(Complex c1, Complex c2) {
    int new_real = c1.x + c2.x;
    int new_i = c1.y + c2.y;

    // There we created a in scope ans object which include added real and imaginary values

    // It will create a new object with these new values
    Complex ans(new_real, new_i);

    // And we are returning that particular object
    return ans;
}

int main() {
    Complex a(1,2);
    Complex b(3,4);

    // There we are storing the returned object in another Complex class object
    Complex add_ans = add(a,b);
    add_ans.display();
}
