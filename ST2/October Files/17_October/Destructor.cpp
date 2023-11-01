//
// Created by DELL on 17/10/2023.
//

/*
 * As the Destructor name suggests , It Destroys the class
 *
 * When all the work of main function being executed
 * So just before the main function got pop from stack
 * Class got destroyed by the use of destructor
 */

#include <bits/stdc++.h>

using namespace std;

class Employee {
private:
    char name[100];
    int id;

public:
    Employee() {
        // default constructor
        cout << "Constructor is called" << endl;
    }

    ~Employee() {
        // destructor
        cout << "Destructor called" << endl;
    }
};


int main() {
    Employee e1;

    return 0;
}

