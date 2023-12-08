//
// Created by DELL on 22/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class A {
    int a;
public:
    A() {
        a = 10;
        cout << "Inside Constructor A" << endl;
    }

    ~A() {
        cout << "Inside Destructor A" << endl;
    }
};

class B : public A{
    int b;
public:
    B() {
        b = 10;
        cout << "Inside Constructor B" << endl;
    }
    ~B() {
        cout << "Inside Destructor B" << endl;
    }
};

class C : public B{
    int c;
public:
    C() {
        c = 10;
        cout << "Inside Constructor C" << endl;
    }
    ~C() {
        cout << "Inside Destructor C" << endl;
    }
};

int main() {
    C obj;
    return 0;
}