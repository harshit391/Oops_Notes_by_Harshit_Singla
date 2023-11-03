//
// Created by DELL on 03/11/2023.
//

/*
Given a string, recursively remove adjacent duplicate characters from the string.
The output string should not have any adjacent duplicates.

Input: caaabbbaacdddd
Output: Empty String

 Input: acaaabbbacdddd
Output: acc
 */

#include <bits/stdc++.h>

using namespace std;

string remove(string a) {
    if (a.length() < 2) {
        return a;
    }

    int i=0;
    while (i<a.length()-1 && a[i]!=a[i+1]) {
        i++;
    }

    if (i == a.length()-1) {
        return a;
    }

    int j=i+1;
    while (j<a.length() && a[i]==a[j]) {
        j++;
    }

    return remove(a.substr(0,i) + a.substr(j));
}

int main() {
    string str;
    cin >> str;

    string result = remove(str);

    cout << result << endl;

    return 0;
}