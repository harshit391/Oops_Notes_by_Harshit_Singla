//
// Created by DELL on 03/11/2023.
//

/*
Given an image represented by n*m matrix, rotate the image by 90 degrees in clockwise
direction.

Matrix:
1 2 3
4 5 6
7 8 9

Output:
7 4 1
8 5 2
9 6 3
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int row,column;

    cin >> row >> column;

    int ** mat1 = new int*[row];

    for (int i=0;i<row;i++) {
        mat1[i] = new int[column];
    }

    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            cin >> mat1[i][j];
        }
    }

    for (int i=0;i<column;i++) {
        for (int j=row-1;j>=0;j--) {
            cout << mat1[j][i] << " ";
        }
        cout << endl;
    }

    return 0;


}
