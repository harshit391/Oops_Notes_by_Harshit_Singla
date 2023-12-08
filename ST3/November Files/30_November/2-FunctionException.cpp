//
// Created by DELL on 30/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

void func3(){
    cout << "func 3" << endl;
    throw 1;
}

void func2() {
    cout << "func 2" << endl;
    func3();
}

void func1() {
    cout << "func 1" << endl;
    func2();
}

int main() {
    try{
        func1();
    } catch(...) {
        cout << "Exception Caught" << endl;
    }
}
