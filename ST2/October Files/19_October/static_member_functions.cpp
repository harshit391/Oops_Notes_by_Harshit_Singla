//
// Created by DELL on 19/10/2023.
//

/*
 * Static Member Functions
 *
 * Member Functions which are not allowed to change the value of data members
 */

#include <bits/stdc++.h>

using namespace std;

class Employee {
    char name[100];
    // int age;
    static int count; /* Assigns to 0 automatically */
public:
    int age; // To take example of const working
    Employee(char * n, int a) {
        strcpy(name, n);
        age = a;
    }

    void display1() {
        cout << name << endl;
        cout << age << endl;
    }

    void display() const{
        /* Now We can't change any value in this Only Read function */
        cout << name << endl;
        cout << age << endl;
    }
};

int main() {
    Employee e1("Harshit",19);

    /* This will give error as const function is declared which do not let us change values */
    e1.age = 12;
    e1.display();
    e1.display1();
}