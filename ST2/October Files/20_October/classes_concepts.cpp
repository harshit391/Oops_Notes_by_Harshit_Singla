//
// Created by DELL on 20/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Employee {
public:
    char name[100];
    int id;
    Employee(char * n, int i){
        id = i;
        strcpy(name, n);
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name << endl;
    }
};

void change1(Employee e) {
    e.id = 391;
    strcpy(e.name, "Singla");
}

void change2(Employee& e) {
    e.id = 393;
    strcpy(e.name, "Harshpreet");
}

void change3(Employee * e) {
    (*e).id = 386;
    strcpy((*e).name, "Behal");
}

int main() {
    Employee a1("Kukreja",386);
    a1.display();

    change1(a1);
    a1.display();

    change2(a1);
    a1.display();

    change3(&a1);
    a1.display();

    return 0;
}


