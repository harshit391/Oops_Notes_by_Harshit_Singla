//
// Created by DELL on 28/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Shape{
public:
    virtual float calcArea() = 0;
};

class Circle : public Shape{
    int radius;
public:
    Circle(int radius) {
        this->radius = radius;
    }
    float calcArea(){
        return 3.14 * radius * radius;
    }
};

class Square : public Shape{
    int side;
public:
    Square(int side) {
        this->side = side;
    }
    float calcArea() {
        return side * side;
    }
};

int main() {
    Circle c1(5);
    Square s1(5);

    cout << c1.calcArea() << endl;
    cout << s1.calcArea() << endl;

    return 0;
}