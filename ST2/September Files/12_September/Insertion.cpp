#include <iostream>

using namespace std;

/**
 * Insertion Sort
 *
 * It is based on the concept that we make a key as current index
 * Then we will traverse backwards from that index of array to start
 * Checking is the element at some index is greater than key
 * It is , Shift that element from left to right
 * At the point when encountered element less than key we set the key to one added to the index
 */

int main()
{
    int n;
    cin >> n;

    int arr[100000];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    // MAIN INSERTION SORT
    for (int i=1;i<n;i++)
    {
        // Selecting a key as current index element in array
        int key = arr[i];

        // And creating j as inner loop which will traverse from i-1 index to start of array
        int j = i-1;

        // When traversing backwards if the current element is greater than key
        while (j>=0 && arr[j] > key)
        {
            // Shift the element to right
            arr[j+1] = arr[j];

            // decrement j
            j--;
        }

        // When element at j is less than key set the key to j+1 index
        arr[j+1] = key;
    }

    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}