//
// Created by DELL on 22/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Shape{
public:
    static double getArea() {
        return 0;
    }
};

class Circle : public Shape{
    int r;
public:
    explicit Circle(int x) {
        r = x;
    }
    [[nodiscard]] double getArea() const {
        return 3.14*r*r;
    }
};

class Square : public Shape {
    int s;
public:
    explicit Square(int s) {
        this->s = s;
    }
    [[nodiscard]] int getArea() const {
        return s*s;
    }
};
int main() {
    Circle c1(5);
    Square s1(5);

    cout << c1.getArea() << endl;
    cout << s1.getArea() << endl;

    return 0;
}