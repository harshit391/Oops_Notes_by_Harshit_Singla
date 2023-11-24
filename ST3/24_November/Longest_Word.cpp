//
// Created by DELL on 24/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<string> arr;

    int start = 0;
    int end = 0;
    int max_start = 0;
    int max_end = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ') {
            end = i-1;
            if (max_end-max_start+1 < end-start+1) {
                max_start = start;
                max_end = end;
            }
            start = i + 1;
        }
    }

    if (max_end-max_start+1 < s.length()-start+1) {
        max_start = start;
        max_end = s.length();
    }


    cout << s.substr(max_start, max_end-max_start+1) << endl;

    /*
     * String Stream is a best way to Split words by space and store them seperately
    */
    stringstream ss(s);

    string word;
    string longestWord = "";
    while (ss >> word) {
        if (word.size() > longestWord.size()) {
            longestWord = word;
        }
    }

    cout << longestWord << endl;




}