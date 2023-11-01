//
// Created by DELL on 17/10/2023.
//

/*
 * A friend class in C++ is a class that has access to the private and protected members of another class.
 *
 * This is in contrast to regular classes, which can only access the public members of other classes.
 *
 * Friend classes are declared using the friend keyword
 * inside the class definition of the class that is granting access.
 */
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

    // Now as we declared Printer class as friend of Student
    friend class Printer;
};

// So Printer can now access every data member of class Student
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
