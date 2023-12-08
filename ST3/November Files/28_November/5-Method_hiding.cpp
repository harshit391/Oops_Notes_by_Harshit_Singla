//
// Created by DELL on 28/11/2023.
//
#include <bits/stdc++.h>

using namespace std;

class A{
public:
    void func(){
        cout << "Default Parameter Function" << endl;
    }
};

class B : public A{
public:
    void func(int x) {
        cout << "Parameterised Function" << endl;
    }
};

int main() {
    B obj;
    obj.A::func();
    obj.func(3);

    /* Without scope resolution it can't access the function of A*/
//    obj.func();

    return 0;
}