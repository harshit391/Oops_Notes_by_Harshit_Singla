#include <iostream>

using namespace std;

/* Find Minimum in the array*/

int main()
{
    // Creating an array
    int n;
    cin >> n;

    int arr[99999];

    // Declare a minimum variable and assign the largest value possible
    int min1 = 2147483647;

    // When input the array
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        // If the number input is greater then the minimum variable set minimum to current element

        // In this way the minimum number entered get sorted in array

        if (arr[i]<min1) min1 = arr[i];
    }

    // Display the minimum number possible
    printf("%d\n",min1);

    return 0;
}