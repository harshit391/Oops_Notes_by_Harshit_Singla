//
// Created by DELL on 28/11/2023.
//
#include <bits/stdc++.h>

using namespace std;

class A{
public:
    A() {
        cout << "Constructor A Called" << endl;
    }
//    ~A() {
//        cout << "Destructor A Called" << endl;
//    }
    virtual ~A() {
        cout << "Destructor A Called" << endl;
    }
};

class B : public A{
public:
    B(){
        cout << "Constructor B Called" << endl;
    }
    ~B() {
        cout << "Destructor B Called" << endl;
    }
};

int main() {
    A * aptr = new B();

    delete aptr;
    aptr = nullptr;

    /*
     * Now B destructor Hasn't called which lead to memory leak
     * So we use Virtual Destructor for this
     */

    return 0;
}