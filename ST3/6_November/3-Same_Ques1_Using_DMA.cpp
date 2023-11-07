//
// Created by DELL on 06/11/2023.
//

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

//    Car(Car &c1) {
//        name = new char[strlen(c1.name)+1];
//        strcpy(name, c1.name);
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