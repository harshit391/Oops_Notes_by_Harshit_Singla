//
// Created by DELL on 24/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

void withoutStringStream(string s) {
    for (int i=0,j=s.length()-1;i<=j;i++,j--){
        if (s[i] != s[j]) {
            cout << "False" << endl;
            return;
        }
    }

    cout << "True" << endl;
}

void withStringStream(string s) {
    string word = s;
    std::reverse(s.begin(), s.end());
    if (s == word) {
        cout << "True" << endl;
        return;
    }

    cout << "False" << endl;
}

int main() {
    string s;
    cin >> s;

    withoutStringStream(s);
    withStringStream(s);

    return 0;
}