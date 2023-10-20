//
// Created by DELL on 20/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

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

Complex add(Complex c1, Complex c2) {
    int new_real = c1.x + c2.x;
    int new_i = c1.y + c2.y;
    Complex ans(new_real, new_i);
    return ans;
}

int main() {
    Complex a(1,2);
    Complex b(3,4);
    Complex add_ans = add(a,b);
    add_ans.display();
}
