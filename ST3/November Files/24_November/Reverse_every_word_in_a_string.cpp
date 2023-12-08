//
// Created by DELL on 24/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);


    string result;


    int start = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            string ps;
            for (int j = i-1; j>=start; j--) {
                ps  = ps + s[j];
            }
            result = result + ps + " ";
            start = i + 1;
        }
    }
    string last;
    for (int j = s.length()-1; j>=start; j--) {
        last = last + s[j];
    }
    result = result + last;

    cout << result << endl;

    stringstream ss(s);

    string word;
    string ans = "";
    while (ss >> word) {
        std::reverse(word.begin(), word.end());
        ans = ans+word+" ";
    }

    cout << ans << endl;

}
