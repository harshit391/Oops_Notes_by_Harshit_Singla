//
// Created by DELL on 08/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class String{
private:
    char * str;
public:
    String(char * arr) {
        str = new char[strlen(arr)+1];
        strcpy(str, arr);
    }

    void display() {
        cout << str << endl;
    }
    
    String operator+(String s) {
        char * arr2 = new char[strlen(str) + strlen(s.str) + 1];
        int j=0;
        for (int i=0;i<strlen(str);i++) {
            arr2[j++] = str[i];
        }
        for (int i=0;i<strlen(s.str);i++) {
            arr2[j++] = s.str[i];
        }
        return String(arr2);
    }
    
    bool operator<(String s) {
        return strcmp(str , s.str) < 0;
    }


    bool operator>(String s) {
        return strcmp(str , s.str) > 0;
    }


    bool operator==(String s) {
        return strcmp(str , s.str);
    }
};

int main() {
    String s1("abc");
    String s2("def");

    String s3 = s1 + s2;
    s3.display();

    cout << (s1 > s2) << endl;
    cout << (s1 < s2) << endl;
}