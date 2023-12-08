//
// Created by DELL on 06/11/2023.
//

/*
 * Copy Constructor
 *
 * Called Automatically as soon as we create a copy of an object
 */

#include <bits/stdc++.h>

using namespace std;

class Car{
public:
    char name[1000]{};
    int mileage;
    int price;
    int seats;

    Car(char n[], int m, int p, int s) {
        strcpy(name, n);
        mileage = m;
        price = p;
        seats = s;
    }

    void display() {
        cout << "Name :- " << name << endl;
        cout << "Mileage :- " << mileage << endl;
        cout << "Price :- " << price << endl;
        cout << "Seats :- " << seats << endl;
    }
};


int main() {
    Car c1("Mercedes", 150, 1200000, 4);

    // It will create a copy of c1 and assign it to c2
    Car c2(c1);

    // It will create a copy of c1 and assign it to c3
    Car c3 = c1;

    cout << "Object C1" << endl;
    c1.display();
    cout << endl << "Object C2" << endl;
    c2.display();
    cout << endl << "Object C3" << endl;
    c3.display();
}