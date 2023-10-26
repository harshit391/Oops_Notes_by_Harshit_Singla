//
// Created by DELL on 15/09/2023.
//

/*
Find First and Last position of an element in Sorted array using Binary Search

Approach :-
First find the element using binary search

Then Make two Partitions of array around that element index
Apply Binary Search at the left partition
Apply Binary Search at the right partition
*/

#include <iostream>

using namespace std;

// Driver Binary Search to find the element
int driver_BinarySearch(int * arr,int n, int target) {
    int start = 0;
    int end = n-1;

    while (start < end)
    {
        int mid = start + (end-start)/2;

        if (arr[mid]==target)
        {
            return mid;
        }

        else if (arr[mid]>target) end = mid -1;

        else start = mid + 1;
    }

    return -1;
}

// Left Side Binary Search
int startpos_BinarySearch(int * arr, int end_index_for_left_side, int target) {
    int start = 0;
    int end = end_index_for_left_side-1;

    int start_position = end_index_for_left_side;

    while (start <= end)
    {
        int mid = start + (end-start)/2;

        if (arr[mid]==target)
        {
            // If element got found update end with mid - 1
            start_position = mid;
            end = mid - 1;
        }

        else if (arr[mid]>target) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }

    return start_position;
}

// Right Side binary Search
int endpos_BinarySearch(int * arr, int start_index_for_right_side, int target, int length_of_array) {
    int start = start_index_for_right_side;
    int end = length_of_array-1;

    int end_position = start_index_for_right_side;

    while (start <= end)
    {
        int mid = start + (end-start)/2;

        if (arr[mid] == target) {

            // If element is found update start with mid + 1
            end_position = mid;
            start = mid + 1;
        }

        else if (arr[mid] > target) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }

    return end_position;
}


int main()
{
    int n;
    cin >> n;
    int * arr = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // First we found the element
    int found = driver_BinarySearch(arr, n,target);

    // If element was not present we print -1 and -1
    if (found == -1) {
        cout << -1 << " " << -1 <<  endl;
        return 0;
    }

    // But if element present we found its start position and end position
    int startposition = startpos_BinarySearch(arr, found, target);
    int endposition = endpos_BinarySearch(arr, found, target, n);

    // Printing both positions
    cout << startposition << " " << endposition << endl;

    return 0;


}
