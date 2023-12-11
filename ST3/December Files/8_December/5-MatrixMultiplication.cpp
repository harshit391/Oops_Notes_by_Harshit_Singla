#include <bits/stdc++.h>

using namespace std;

class Matrix{
    int ** mat;
    int row;
    int col;
public:
    Matrix(int r, int c) {
        row = r;
        col = c;
        mat = new int*[row];
        for (int i=0; i<row; i++) {
            mat[i] = new int[col];
        }

        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                mat[i][j] = 0;
            }
        }
    }

    Matrix(int r, int c, int ** mat) {
        this->mat = new int*[r];
        for (int i=0; i<r; i++) {
            this->mat[i] = new int[c];
        }
        row = r;
        col = c;

        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                this->mat[i][j] = mat[i][j];
            }
        }
    }

    void display() {
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix, Matrix);

};

Matrix operator*(Matrix a, Matrix b) {
    Matrix result(a.row, b.col);
    if (a.col != b.row) {
        cout << "Invalid Multiplication";
    } else {
        for (int i = 0; i < a.row; i++) {
            for (int j = 0; j < b.col; j++) {
                for (int k = 0; k < a.col; k++) {
                    result.mat[i][j] += a.mat[i][k] * b.mat[k][j];
                }
            }
        }
    }
    return result;
}

int main() {

    int r1,c1;
    cin >> r1 >> c1;

    int ** arr1 = new int*[r1];
    for (int i=0; i<r1; i++) {
        arr1[i] = new int[c1];
    }

    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++) {
            cin >> arr1[i][j];
        }
    }

    int r2,c2;
    cin >> r2 >> c2;

    int ** arr2 = new int*[r2];
    for (int i=0; i<r2; i++) {
        arr2[i] = new int[c2];
    }

    for (int i=0; i<r2; i++) {
        for (int j=0; j<c2; j++) {
            cin >> arr2[i][j];
        }
    }

    Matrix m1(r1, c1, arr1);
    m1.display();

    Matrix m2(r2, c2, arr2);
    m2.display();

    Matrix m3 = m1*m2;
    m3.display();

    for (int i=0; i<r1; i++) {
        delete[] arr1[i];
        arr1[i] = nullptr;
    }

    delete[] arr1;
    arr1 = nullptr;

    for (int i=0; i<r2; i++) {
        delete[] arr2[i];
        arr2[i] = nullptr;
    }

    delete[] arr2;
    arr2 = nullptr;

    return 0;

}
