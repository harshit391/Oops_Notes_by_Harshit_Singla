//
// Created by DELL on 20/10/2023.
//

/*
 * If we have to talk about Passing Objects as a parameters
 *
 * Then We have three ways in which we can pass it
 */

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

/*
 * Like Here if we will pass the object simply as a parameter
 * A copy of that object is created which doesn't apply any change to object
 */
void change1(Employee e) {
    e.id = 391;
    strcpy(e.name, "Singla");
}

/*
 * Now we are passing the address of object
 * Which actually says that we are modifying the object inplace
 * without creating a copy of it
 */
void change2(Employee& e) {
    e.id = 393;
    strcpy(e.name, "Harshpreet");
}

/*
 * Same as passing address
 * IN this we are passing Reference to the object that where it is stored in memory
 * So we can go there and change the value inside the object inplace
 */
void change3(Employee * e) {
    (*e).id = 386;
    strcpy((*e).name, "Behal");
}

/*
 * DIFFERENCE BETWEEN PASSING ADDRESS AND REFERENCE
 *
 * When Passing Reference we have to de reference it to access their values
 * In Address it is not required
 * We can access it normally
 */

int main() {
    Employee a1("Kukreja",386);
    a1.display();

    // It will print Kukreja , 386 values without changing
    change1(a1);
    a1.display();

    // This will change the values in place
    // just we have to pass the object normally
    change2(a1);
    a1.display();

    // This will change the value in place
    // But we have to pass the address of object as a reference
    change3(&a1);
    a1.display();

    return 0;
}


