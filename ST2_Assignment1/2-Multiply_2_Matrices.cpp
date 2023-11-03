//
// Created by DELL on 02/11/2023.
//

// Multiply 2 Matrices

#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Enter Row and Column For Matrix 1" << endl;
    int row1,col1;
    cin >> row1 >> col1;


    int ** mat1 = new int*[row1];
    for (int i=0;i<row1;i++) {
        mat1[i] = new int[col1];
    }

    cout << endl << "Enter Matrix " << endl;
    for (int i=0;i<row1;i++) {
        for (int j=0;j<col1;j++) {
            cin >> mat1[i][j];
        }
    }

    cout << endl << "Enter Row and Column For Matrix 1" << endl;

    int row2,col2;
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Invalid Matrix" << endl;
        return 0;
    }

    int ** mat2 = new int*[row2];
    for (int i=0;i<row2;i++) {
        mat2[i] = new int[col2];
    }

    cout << endl << "Enter Matrix " << endl;
    for (int i=0;i<row2;i++) {
        for (int j=0;j<col2;j++) {
            cin >> mat2[i][j];
        }
    }

    int ** result = new int*[row1];
    for (int i=0;i<col1;i++) {
        result[i] = new int[col1];
    }

    for (int i=0;i<row1;i++) {
        for (int j=0;j<col2;j++) {
            result[i][j] = 0;
        }
    }

    for (int i=0;i<row1;i++) {
        for (int j=0;j<col2;j++) {
            for (int k=0;k<row2;k++) {
                result[i][k] += (mat1[j][i]*mat2[k][j]);
            }
        }
    }

    for (int i=0;i<row1;i++) {
        for (int j=0;j<col2;j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
