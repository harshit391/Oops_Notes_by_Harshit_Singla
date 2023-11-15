//
// Created by DELL on 15/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

class Matrix{
private:
    int ** mat;
    int rows;
    int column;
public:
    Matrix(int ** mat, int rows, int column) {
        this->rows = rows;
        this->column = column;
        this->mat = new int*[rows];
        for (int i=0; i<rows; i++) {
            this->mat[i] = new int[column];
        }
        for (int i=0; i<rows; i++) {
            for (int j=0; j<column; j++) {
                this->mat[i][j] = mat[i][j];
            }
        }
    }

    Matrix operator+(Matrix n) {
        int ** newMat = new int*[rows];
        for (int i=0; i<rows; i++) {
            newMat[i] = new int[column];
        }

        for (int i=0; i<rows; i++) {
            for (int j=0; j<column; j++) {
                newMat[i][j] = this->mat[i][j] + n.mat[i][j];
            }
        }

        return {newMat, rows, column};
    }

    void printMatrix() {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<column; j++) {
                cout << this->mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main() {
    int r,c;

    cin >> r>> c;

    int ** m = new int*[r];
    for (int i=0; i<r; i++) {
        m[i] = new int[c];
    }

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> m[i][j];
        }
    }

    int r2,c2;

    cin >> r2>> c2;

    int ** m1 = new int*[r2];
    for (int i=0; i<r2; i++) {
        m1[i] = new int[c2];
    }

    for (int i=0; i<r2; i++) {
        for (int j=0; j<c2; j++) {
            cin >> m1[i][j];
        }
    }

    Matrix mat1(m, r, c);
    Matrix mat2(m1, r2, c2);

    Matrix mat3 = mat1 + mat2;

    mat3.printMatrix();




}