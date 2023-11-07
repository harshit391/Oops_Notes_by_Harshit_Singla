//
// Created by DELL on 07/11/2023.
//

/*
 * When Give Memory to Class Object Dynamically by using a Constructor
 * Is called Dynamic Constructor
 */

#include <bits/stdc++.h>

using namespace std;

class Car{
public:
    char *  name;
    int * mileage;
    int * price;
    int * seats;

    // Its just that we passing parameters as references
    Car(char * n , int p, int m, int s) {

        // Allocating Memory Dynamically by use of 'new' keyword
        name = new char[strlen(n)+1];
        strcpy(name, n);

        // By use of (variable) we can directly assign the reference of value block to the variable
        mileage = new int(m);
        price = new int(p);
        seats = new int(s);
    }

    void display() {
        cout << "Name :- " << name << endl;

        // To access values of these
        // We first need to de-reference them
        cout << "Mileage :- " << *mileage << endl;
        cout << "Price :- " << *price << endl;
        cout << "Seats :- " << *seats << endl;
        cout << endl;
    }
};


int main() {
    Car c1("Mercedes", 150, 1200000, 4);
    c1.display();
}
