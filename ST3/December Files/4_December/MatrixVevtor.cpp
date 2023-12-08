#include <bits/stdc++.h>

using namespace std;

int main() {



    int rows;
    int columns;

    cin >> rows >> columns;

    vector<vector<int>> mat(rows);

    for (int i=0; i<rows; i++) {
        mat[i] = vector<int>(columns);
    }

    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cin >> mat[i][j];
        }
    }

    for (const vector<int>& arr : mat) {
        for (int j : arr) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;

}
