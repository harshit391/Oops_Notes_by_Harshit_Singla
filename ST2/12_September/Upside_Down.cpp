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
        if (i%2==0) {
        for (int j=0;j<n;j++)
        {
            cout << arr[j][i] << " ";
        }
         }

        else {
            for (int j=n-1;j>=0;j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}