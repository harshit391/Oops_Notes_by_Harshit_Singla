//
// Created by DELL on 03/11/2023.
//
/*
 For instance, consider a bin of red (0)and blue (1) marbles randomly mixed together.
 Your goal is to sort them in such a way that all the red marbles are on one side,
 and all the blue marbles are on the other,
 by picking up and placing each marble only once.

 Input array = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
 Output array = [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    int numzero = 0;
    int numone = 0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        if (arr[i]==0) {
            numzero++;
        }
        if (arr[i]==1) {
            numone++;
        }
    }

    int index = 0;
    for (int i=0;i<numzero;i++) {
        arr[index++] = 0;
    }
    for (int i=0;i<numone;i++) {
        arr[index++] = 1;
    }

    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
