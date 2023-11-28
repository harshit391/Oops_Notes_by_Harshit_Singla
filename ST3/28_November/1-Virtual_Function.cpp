//
// Created by DELL on 28/11/2023.
//

/*
 * Without Virtual
 * ---------------
 * Compile time binding
 * static binding
 * Early Binding
 *
 *
 * With Virtual
 * ------------
 * Runtime Binding
 * Dynamic Binding
 * Late Binding
 */


#include <bits/stdc++.h>

using namespace std;

class A{
public:
    virtual void display() {
        cout << "Class A" << endl;
    }
};

class B : public A{
public:
    void display() {
        cout << "Class B" << endl;
    }
};

class C : public B{
public:
    void display() {
        cout << "Class C" << endl;
    }
};


int main() {
    A * aptr;
    B obj;

    aptr = &obj;

    A obj2;

    (*aptr).display();

    /*
     * If The function inside class A is not virtual
     * Then It will always run class A display function
     * As Pointer if of A object type
     */

    aptr->display();

    delete aptr;

    aptr = nullptr;

    return 0;
}

