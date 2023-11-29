//
// Created by DELL on 29/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class A{
public:
    virtual void display() {
        cout << "Display A" << endl;
    }
};

class B : public A{
public:
    void display() {
        cout << "Display B" << endl;
    }
};

int main() {
    A * aptr;
    B obj;

    aptr = &obj;
    (*aptr).display();

    return 0;
}
