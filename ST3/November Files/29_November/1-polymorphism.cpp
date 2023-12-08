//
// Created by DELL on 29/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Rectangle{
    int len;
    int wid;
public:
    void set(int len, int wid) {
        this->len = len;
        this->wid = wid;
    }

    void set(int len) {
        this->len = len;
        this->wid = len;
    }

    void display() const {
        cout << "Length :- " << len << " and Width :- " << wid << endl;
    }

};

int main() {
    Rectangle r1{};
    r1.set(1,2);
    r1.display();

    Rectangle r2{};
    r2.set(2);
    r2.display();
}

