#include <iostream>

using namespace std;

/**
 * Bubble Sort Consists of Checking every pair in array and swapping them each time
 * If array size is n , then there exists total n-1 passes
 * After each pass the last element of array get sorted
 *
 * Time Complexity in all Cases:- O[n^2]
 */

int main()
{
    /* Creating an Array */
    int n;
    cin >> n;

    int arr[99999];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    /* MAIN BUBBLE SORT*/

    /* Main Passes to Sort an Array will be n-1 */
    for (int i=0;i<n-1;i++)
    {
        /* In each each pass Check the adjacent pairs*/
        for (int j=0;j<n-i-1;j++)
        {
            /* If current is larger than its next element Swap the pair in place*/
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Display the array and you will get sorted array
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}