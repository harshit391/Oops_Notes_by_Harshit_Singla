//
// Created by DELL on 03/11/2023.
//

/*
In a real-world analogy, think of a scenario where you need to count the number of words in a
lengthy document, such as a book or an essay, by recursively breaking it down into smaller
sections and tallying them up to find the total character count.

Input : str = "abcd"
Output :4
 */

#include <bits/stdc++.h>

using namespace std;

int count(string name, int index) {
    if (index >= name.length()) {
        return 0;
    }

    if (name[index] == ' ') {
        return count(name, index+1);
    }
    return 1+count(name, index+1);
}

int main() {
    string name;
    cin >> name;

    cout << count(name, 0) << endl;

    return 0;
}