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

    Car(char * n , int p, int m, int s) {
        name = new char[strlen(n)+1];
        strcpy(name, n);
        mileage = new int(m);
        price = new int(p);
        seats = new int(s);
    }

    void display() {
        cout << "Name :- " << name << endl;
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
