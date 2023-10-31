//
// Created by DELL on 31/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Rectangle{
private:
    float length;
    float width;
public:
    void setlength(float x) {
        length = x;
    }

    void setwidth(float x) {
        width = x;
    }

    float perimeter() {
        return 2*(length+width);
    }

    float area() {
        return length*width;
    }

    void show() {
        cout << "Length :- " << length << " " << "Width :- " << width << endl;
    }

    int sameArea(Rectangle r) {
        if (length*width == r.width*r.length) return 1;
        return 0;
    }
};

int main() {
    Rectangle r1,r2;
    r1.setlength(10.0);
    r1.setwidth(10.0);

    r1.show();

    r2.setlength(20.0);
    r2.setwidth(5.0);

    r2.show();

    cout << endl;

    cout << r1.perimeter() << endl;
    cout << r2.perimeter() << endl;

    cout << endl;

    cout << r1.area() << endl;
    cout << r2.area() << endl;

    cout << endl;

    cout << r1.sameArea(r2) << endl;

}