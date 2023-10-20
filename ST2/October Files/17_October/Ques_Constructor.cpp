//
// Created by DELL on 17/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Employee {
private:
    char name[1000];
    int id;
    int age;
    static int count;

public:
    Employee(char* na, int i,int a) {
        count++;
        strcpy(name,na);
        id = i;
        age = a;
    }

    int get_age() {
        return age;
    }

    int get_id() {
        return id;
    }

    char* get_name() {
        return name;
    }

    static int get_count() {
        return count;
    }
};
int Employee::count;
int main() {

    char a[1000] = "Harshit";
    char a2[1000] = "Harshpreet";

    Employee e1(a,391,19);
    Employee e2(a2,393,18);

    cout << e1.get_name() << endl;
    cout << e1.get_age() << endl;
    cout << e1.get_id() << endl;
    cout << Employee::get_count() << endl;
    cout << endl;
    cout << e2.get_name() << endl;
    cout << e2.get_age() << endl;
    cout << e2.get_id() << endl;
    cout << Employee::get_count() << endl;

    return 0;
}