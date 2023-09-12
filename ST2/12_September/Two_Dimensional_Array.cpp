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

    // Row Wise Print
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Column Wise Print
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
