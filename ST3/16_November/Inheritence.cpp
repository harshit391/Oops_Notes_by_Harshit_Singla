//
// Created by DELL on 16/11/2023.
//

/*

Inheritance is a fundamental concept in object-oriented programming (OOP)
that allows a new class to inherit properties and methods from an existing class.
This enables code re-usability and helps organize code more efficiently.

Key Terms
--------->
Base class (or superclass): The existing class from which the new class inherits.

Derived class (or subclass): The new class that inherits from the base class.

Inheritance hierarchy: The arrangement of classes in a hierarchical structure, where subclasses inherit from base classes.

Benefits of Inheritance
----------------------->
Inheritance offers several benefits, including:

Code re-usability:
Inheritance allows developers to reuse existing code by creating subclasses that inherit from base classes.
This reduces the amount of code that needs to be written and helps maintain consistency across the codebase.
*/

#include <bits/stdc++.h>

using namespace std;

class Employee{
    /* If Declared Private that means no one can access these members outside the class */

    /* If Declared Protected then only Child Class can Access Members Which is best way */
protected:
    char * name;
    int id;
};

// As we can see we have to repeat name and id

// To Reuse the name and id from Employee
// We can use Inheritance

class /* Derived Class Name*/ Manager : /* Accessibility */ public /* Base Class Name */ Employee {

    /* Default Accessibility is private */
public:
    /* Now we don't have to Re declare name and id */
    /* We can directly use that data members here*/

    int salary;
    char * department;

    void set_data(int id, char * n, int sal, char * dep) {
        department = new char[strlen(dep)];
        name = new char[strlen(n)];

        this->id = id;
        strcpy(name, n);
        salary = sal;
        strcpy(department, dep);
    }

    void get_data() {
        cout << "Name :- " << name << endl;
        cout << "Id :- " << id << endl;
        cout << "Department :- " << department << endl;
        cout << "Salary :- " << salary << endl;
    }
};

int main() {
    Manager m1;
    m1.set_data(391, "Harshit Singla", 0, "Android/IOS");
    m1.get_data();
}