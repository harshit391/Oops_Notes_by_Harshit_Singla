//
// Created by DELL on 06/11/2023.
//

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
    Car c1("Jaguar", 120, 1500000, 4);
    c1.display();
}
