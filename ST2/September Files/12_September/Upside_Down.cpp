//
// Created by DELL on 12/09/2023.
//

//Print Matrix Column Wise but every adjacent column is printed inverted

/*
m n
3 3

Matrix Input
1 2 3
4 5 6
7 8 9

Matrix Output
1 4 7
8 5 2
3 6 9
*/

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
    // Column Wise Print but when the row is odd print from last in that specific row
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i%2==0)
            cout << arr[j][i] << " ";

            else cout << arr[m-j-1][i] << " ";
        }

        cout << endl;
    }

    return 0;
}