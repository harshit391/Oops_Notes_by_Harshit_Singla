//
// Created by DELL on 20/09/2023.
//

/**
 * If we define Matrix of n X m where n will be number of rows and m will be number of columns
 *
 * So Basically we are creating n number of arrays of size m
 *
 * So we can just make n arrays and store there addresses in a separate array
 *
 * By this 2d matrix can be allocated dynamically
 */

#include <iostream>

using namespace std;

int main()
{
    // No. of rows
    int n;
    cin >> n;

    // No. of column
    int m;
    cin >> m;


    // Now as we know we are making array to store address of n number of arrays
    // SO we have to write int* to make the compiler know that we are storing addresses
    int ** arr = new int*[n];

    // Now at every index from 0 to n in arr we store address of new arrays allocated dynamically too
    for (int i=0;i<n;i++){
        arr[i] = new int[m];
    }


    // WE can input values in the 2d array as normal array just the declaration is pretty different
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    // And printing the matrix as usual
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // But always remember to free that memory from heap because heap keep that memory occupied
    // And as we don't need that memory we delete from the heap
    for (int i=0;i<n;i++){
        delete[] arr[i];

        // Now the pointer we made start pointing to something garbage and may be create a problem
        // So After deletion of memory from pointer make that pointer NULL
        arr[i] = nullptr;
    }

    // At last as we created a array for keeping pointers
    delete[] arr;

    // Delete that array make that pointer NULL too
    arr = nullptr;

    return 0;

}
