//
// Created by DELL on 13/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    int arr[100][100];

    int n,m;

    cin >> n >> m;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    int row = 0;
    int column = m;
    int top = 0;
    int bottom = n;

    while (bottom >= top && row <= column)
    {
        for (int i=row;i<column;i++)
        {
            cout << arr[row][i] << " ";
        }
        row++;

        for (int i=row;i<bottom;i++)
        {
            cout << arr[i][column-1] << " ";
        }
        column--;

        if (row<bottom) {
            for (int i = column-1; i >= top; i--) {
                cout << arr[bottom - 1][i] << " ";
            }
            bottom--;
        }

        if (top<column) {
            for (int i = bottom-1; i >= row; i--) {
                cout << arr[i][top] << " ";
            }
            top++;
        }
    }

    return 0;
}