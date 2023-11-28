//
// Created by DELL on 28/11/2023.
//
#include <bits/stdc++.h>

using namespace std;

class A{
public:
    virtual void display() = 0;
    /*
     * Forcing to Override
     */

    void func() {
        cout << "This is abstract" << endl;
    }
};

class B : public A{
public:
//    void display() {
//        cout << "Class B" << endl;
//    }

    virtual void display() = 0;

};

class C : public B{
public:
    void display() {
        cout << "Class C" << endl;
    }
};


int main() {
//    A obj;
    /*
     * We can't make its object because it is an Abstract Class
     *
     * Abstract Class - At least one virtual function is present
     */

//    B obj;
//
//    obj.display();

    C obj;

    obj.display();

    return 0;
}


