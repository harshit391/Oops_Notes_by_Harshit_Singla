//
// Created by DELL on 18/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Second;

class First {
    int val;
public:
    First(int v) {
        val = v;
    }
    friend  void addClasses(First, Second);
};

class Second {
    int data;
public:
    Second(int v) {
        data = v;
    }
    friend void addClasses(First, Second);
};

void addClasses(First f, Second s) {
    cout << "First Class Data + Second Class Data = " << f.val+s.data << endl;
}

int main() {
    First f(5);
    Second s(6);
    addClasses(f,s);

    return 0;
}