//
// Created by DELL on 15/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time operator+(Time t) const {
        int sec = seconds + t.seconds;
        int min = minutes + t.minutes + sec/60;
        int ho = hours + t.hours + min/60;

        return {ho%24, min%60, sec%60};
    }

    void printTime() const {
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }

};

int main() {

    Time t1(4, 10, 30);
    Time t2(5, 15, 59);

    Time t3 = t1 + t2;
    t3.printTime();

    return 0;
}