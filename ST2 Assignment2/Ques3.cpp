//
// Created by DELL on 03/11/2023.
//

/*
consider a contest where participants have their full names listed. Your program should be able
to find and showcase the name of the contestant with the third lengthiest full name in the
competition.

Array elements: abcd abcde abcdef abcdefg abcdefgh
Third highest length string: abcdef

Array elements: abcdef abcd abc
Third highest length string: abc
 */

#include <bits/stdc++.h>

using namespace std;

string thirdlargest(vector<string> arr) {
    if (arr.size() < 3) {
        return "NOT ENOUGH CONTESTANTS";
    }

    sort(arr.begin(), arr.end(), [](const string&a, const string&b){
        return a.length() > b.length();
    });

    return arr[2];
}

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for( int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << thirdlargest(arr) << endl;

    return 0;

}