//
// Created by DELL on 06/11/2023.
//

/*
 * Shallow Copy
 *
 * Shallow copy creates a new object and copies the values of the original object into it.
 * However, if the original object contains references to other objects,
 * the shallow copy will simply copy those references.
 * This means that the new object and the original object will share the same underlying data.
 * Its Like Two Variables have references to one block of data
 *
 * Deep Copy
 *
 * Deep copy creates a new object and copies the values of the original object into it,
 * including any references to other objects.
 * This means that the new object will have its own copy of all the data,
 * and the new object and the original object will not share any underlying data.
 * Now Both Objects Point to their respective separate references
 */

#include <bits/stdc++.h>

using namespace std;

class Car{
public:
    char * name;
    int mileage{};
    int price{};
    int seats{};

    Car(char * n, int m, int p, int s) {
        name = new char[strlen(n)+1];
        strcpy(name, n);
        mileage = m;
        price = p;
        seats = s;
    }

    // Deep Copy - To Copy made by Developer
    Car(Car &c1) {
        name = new char[strlen(c1.name)+1];
        strcpy(name, c1.name);
        price = c1.price;
        mileage = c1.mileage;
        seats = c1.seats;
    }

    // Shallow Copy  - By Default made by Compiler
//    Car(Car &c1) {
//        name = c1.name;
//        price = c1.price;
//        mileage = c1.mileage;
//        seats = c1.seats;
//    }

    void display() const {
        cout << "Name :- " << name << endl;
        cout << "Mileage :- " << mileage << endl;
        cout << "Price :- " << price << endl;
        cout << "Seats :- " << seats << endl;
    }

    // Normal Class Destructor If you remember
    ~Car() {
        delete[] name;
        name = nullptr;
    }
};

int main() {
    Car c1("Jaguar", 120, 1500000, 4);
    c1.display();
    Car c2(c1);
    c2.name[0] = 'A';
    c2.price = 200;
    c1.display();
    c2.display();
}