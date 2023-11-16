//
// Created by DELL on 16/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Vehicle{
protected:
    int count;
    char *  company;
};

class Car : Vehicle {
public:
    int mileage;
    void set_data(int wheel, char * comp, int m) {
        count = wheel;
        company = new char[strlen(comp)];
        strcpy(company, comp);
        mileage = m;

    }

    void display() {
        cout << "Company :- " << company << endl;
        cout << "Count of Wheels :- " << count << endl;
        cout << "Mileage :- " << mileage << endl;
    }
};

int main() {
    Car c1;
    c1.set_data(12,"Mustang",160);
    c1.display();
}