#include <bits/stdc++.h>

using namespace std;

class Shape{
protected:
    double area;
public:
    double calculateArea() {
        return area;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double l, double b) {
        area = l*b;
    }
};

class Circle : public Shape {
public:
    Circle(double r) {
        area = 3.14*r*r;
    }
};

int main() {

    Rectangle r1(3.0, 4.0);
    Circle c1(4.0);

    cout << r1.calculateArea() << endl;
    cout << c1.calculateArea() << endl;
    return 0;
}
