//
// Created by DELL on 23/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Time{
    int hours;
    int minutes;
public:
    Time(int x) {
        hours = x/60;
        minutes = x%60;
    }
    void display() {
        cout << hours << "h : " << minutes <<"m"<< endl;
    }
};

int main() {
    int m;
    cin >> m;

    Time t = m;

    t.display();
}