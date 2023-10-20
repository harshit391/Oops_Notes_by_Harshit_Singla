//
// Created by DELL on 18/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    char * name;
    int studentID;
    int grades[5];

public:
    Student(char * na, int id, int ges[]) {
        strcpy(name, na);
        studentID = id;;
        for (int i=0; i<5;i++) grades[i] = ges[i];
    }
    void display() {
        cout << "Name : " << name << endl;
        cout << "Student ID : " << studentID << endl;

        for (int grade : grades) {
            cout << grade << " ";
        }

        cout << endl;
    }

    friend class GradeBook;
};

class GradeBook {
public:
    double computeAverage(Student st1) {
        int sum = 0;
        for (int i=0;i<5;i++) {
            sum += st1.grades[i];
        }
        double avg = (sum*1.0)/5;
        return avg;
    }

};

int main() {

    int gra[5];

    for (int & i : gra) {
        i = 49;
    }

    Student st("Harshit", 391, gra);

    st.display();

    GradeBook gb;
    cout << "Average : " << gb.computeAverage(st) << endl;

    return 0;

}
