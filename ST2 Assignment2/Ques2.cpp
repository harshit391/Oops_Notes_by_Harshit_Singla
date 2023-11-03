//
// Created by DELL on 03/11/2023.
//

/*
Identify all the individuals in a group whose performance or achievement is surpassed by at
least two other members.

For example, consider a sports team where each player's score represents their performance in a
game. Your task is to find and list the players who were outperformed by at least two of their
teammates in the same match.

Original array: 7 12 9 15 19 32 56 70
Elements which have at-least two greater elements: 7 12 9 15 19 32
 */

#include <bits/stdc++.h>

using namespace std;

int check(int * arr, int index, int n) {
    int count = 0;
    for (int i=0;i<n;i++) {
        if (i!=index && arr[i] > arr[index] && count < 2) {
            count++;
        } else if (count == 2){
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        if (check(arr, i, n)) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}