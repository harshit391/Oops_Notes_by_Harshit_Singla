//
// Created by DELL on 23/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class A{
public:
    A() {
        cout << "Constructor A Called" << endl;
    }
    void featureA() {
        cout << "Feature A " << endl;
    }
};

class B : virtual public A{
public:
    B() {
        cout << "Constructor B Called" << endl;
    }

};

class C : virtual public A{
public:
    C() {
        cout << "Constructor C Called" << endl;
    }
};

class D : public B, public C{
public:
    D() {
        cout << "Constructor D Called" << endl;
    }
};

int main() {
    D obj;
    obj.featureA();

    return 0;
}