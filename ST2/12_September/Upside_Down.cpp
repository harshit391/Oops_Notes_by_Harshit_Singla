//
// Created by DELL on 12/09/2023.
//

//Print Matrix Column Wise but every even column is printed inverted

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
    // Column Wise Print
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