#include <iostream>

using namespace std;

/**
 * Selection Sort
 *
 * It is based on selecting current element of array
 * then Traversing from that point of index where the element is present
 * We set a minimum to current index
 * IF element is less than element at minimum index set the minimum index to that index
 * And when encountered the a number which is less than the selected element
 * Swap the minimum index element to the element selected before starting traversing
 */

int main()
{
    // Creating an array
    int n;
    cin >> n;

    int arr[100000];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    // MAIN SELECTION SORT
    for (int i=0;i<n;i++)
    {
        // Select current as the minimum element index
        int minimum = i;

        // Start traversing from i+1 to end of array
        for (int j=i+1;j<n;j++)
        {
            // If element is less than element at minimum index
            // update minimum with that element index
            if (arr[minimum]>arr[j])
            {
                minimum = j;
            }

            // At last Swap the minimum index with the i index element
            int temp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = temp;
        }
    }

    // Display the array
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

