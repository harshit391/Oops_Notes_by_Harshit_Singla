//
// Created by DELL on 13/09/2023.
//

#include <iostream>

using namespace std;

// SPIRAL PRINT

/*
1 2 3
4 5 6
7 8 9

Printing like this 1 2 3 6 9 8 7 4 5
*/

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

    // First setup four variables

    // To traverse the rows
    int row = 0;

    // To traverse the columns
    int column = m;

    // To keep tracking from top of matrix
    int top = 0;

    // Top keep tracking from bottom of matrix
    int bottom = n;

    // As we know the top shouldn't exceed bottom
    // as well as row shouldn't exceed column
    while (bottom >= top && row <= column)
    {
        // While traversing from row to column
        for (int i=row;i<column;i++)
        {
            // We have to print only row element so keep the 2nd box as changing
            cout << arr[row][i] << " ";
        }
        // As we have traversed through that row so increment it
        row++;

        // Now we have to traverse from that row to the bottom of array
        for (int i=row;i<bottom;i++)
        {
            // And as we dont have to change column so keep the 1st box as changing part
            cout << arr[i][column-1] << " ";
        }
        // Decrement the column as we don't need to traverse it
        column--;

        // Now for rest we have to check the scenario that row shouldn't exceeds the bottom part
        if (row<bottom) {
            // AS we are in bottom lane now
            // So traverse backwards to the left side by top
            for (int i = column-1; i >= top; i--) {
                // Keep printing the bottom elements
                cout << arr[bottom - 1][i] << " ";
            }
            // Decrement the bottom also as we don't need to traverse it
            bottom--;
        }

        // Now check if the top shouldn't exceed the column
        if (top<column) {
            // Now we are in the left column lane so traverse backwards from bottom to row
            for (int i = bottom-1; i >= row; i--) {
                // Print the top elements
                cout << arr[i][top] << " ";
            }
            // Increment the top as we don't need to traverse that lane
            top++;
        }
    }

    return 0;
}