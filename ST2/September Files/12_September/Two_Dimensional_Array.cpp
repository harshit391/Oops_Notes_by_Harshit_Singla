#include <iostream>

using namespace std;

/**
 *
 * 2D array is actually refered to as array inside another array
 */

int main()
{
    // Initialization of 2d array
    int arr[100][100];

    // Setting two variables for row and column
    int n,m;

    // Input no. of rows and no. of columns
    cin >> n >> m;

    // Adding element in the 2d array
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
