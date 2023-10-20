//
// Created by DELL on 17/10/2023.
//
#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    char name[1000];
    int roll_no;

public:
    Student(char * n, int id) {
        strcpy(name,n);
        roll_no = id;
    }
    friend class Printer;
};

class Printer {
public:
    void print_details(Student s) {
        cout << s.name << " " << s.roll_no << endl;
    }
};

int main() {
    Student s1("Harshit",391);
    Printer p1;
    p1.print_details(s1);
    return 0;
}
