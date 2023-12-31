//
// Created by DELL on 07/11/2023.
//

/*
 * Changing the behaviour of operators to work accordingly with objects
 *
 * Syntax
 *
 * return_type operator<sign> (<parameters>) // No Angular Brackets should be there
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

    /*
     * As we overloaded the constructor to accept one parameter only
     * So If we call object by only one parameter It will accept this constructor automatically
     */
    explicit Complex(int r) {
        cout << endl << "Second Constructor Used which take only real value" << endl;
        real = r;
        imag = 0;
    }

    /*
     * Overloading the - operator to work in our way
     */
    Complex operator-() const {
        cout << endl << "Subtraction Constructor Used which returns Complex Multiplied by -1" << endl;
        return {-real, -imag};
    }

    Complex operator++(int) {
        // Int shows that we are having variable behind ++ to make post increment work
        // Only Post will work in this way Pre will not
        cout << endl << "Post Increment Constructor Used" << endl;
        return {++real, ++imag};
    }

    Complex operator++() {
        // In normal Pre words Post don't work
        cout << endl << "Pre Increment Constructor Used" << endl;
        return {++real, ++imag};
    }

    Complex operator--(int) {
        cout << endl << "Post Decrement Constructor Used" << endl;
        return {--real, --imag};
    }

    Complex operator--() {
        cout << endl << "Pre Decrement Constructor Used" << endl;
        return {--real, --imag};
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

    Complex n2 = -n1;
    n2.display();

    Complex n3(20);
    n3.display();

    n1++;
    n1.display();

    ++n1;
    n1.display();

    n1--;
    n1.display();

    --n1;
    n1.display();

    return 0;
}
