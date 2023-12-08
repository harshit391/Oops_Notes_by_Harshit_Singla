//
// Created by DELL on 23/11/2023.
//
#include <bits/stdc++.h>

using namespace std;

class Time{
    int hours;
    int minutes;
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    operator int() {
        return hours*60+minutes;
    }
};

int main() {
    int hours;
    int minutes;

    cin >> hours >> minutes;

    Time t(hours, minutes);

    int m = t;

    cout << "Total Minutes:- " << m << endl;
}