//
// Created by DELL on 05/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    char name[100];
    int rollno;

public:
    void set_value(char name[], int roll){
        strcpy(this->name, name);
        this->rollno = roll;
    }

    int get_roll() {
        return this->rollno;
    }

    string get_name() {
        return this->name;
    }
};

int main() {
    Student st1;

    st1.set_value("Harshit",391);

    cout << st1.get_roll() << endl;

    cout << st1.get_name() << endl;

    return 0;
}

