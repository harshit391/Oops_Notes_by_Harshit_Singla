/*
 * Merge sort is a divide-and-conquer algorithm
 * that works by recursively dividing an array into two halves,
 * sorting each half, and then merging the two sorted halves back together.
 *
 * https://www.geeksforgeeks.org/merge-sort/
 *
 * Mainly We make two Functions
 *
 * One is to Divide the array which is recursive
 * The Other is Conquer which is Merging part
 * Where we merge the divided array
*/

#include <iostream>

using namespace std;

// MAIN MERGING

// In this we Create two arrays for both halves
// A left array and right Array
void conquer(int start, int mid, int end, int * arr) {

    // Left array lengh
    int left_length = mid-start+1;

    // Right array Length
    int right_length = end-mid;

    // Creating left and right array using lengths above
    int * left_arr = new int[left_length];
    int * right_arr = new int[right_length];

    // idx1 track the left array and idx2 track the right array
    int idx1 = 0;
    int idx2 = 0;

    // Now idx3 will give the position from where the merging is being started
    // That's why it got initialized with using Start
    int idx3 = start;

    // Copy the left half of array into left array
    for (int i=0;i<left_length;i++) {
        left_arr[i] = arr[start+i];
    }

    // Copy the right half of array into right array
    for (int i=0;i<right_length;i++) {
        right_arr[i] = arr[mid+1+i];
    }

    // Untill idx1 and idx2 is less than their respectives boundaries of left length and right length
    while (idx1 < left_length && idx2 < right_length) {

        // In both array , the one having the lesser element get inserted into main array
        if (left_arr[idx1] > right_arr[idx2]) {
            arr[idx3++] = right_arr[idx2++];
        }

        else {
            arr[idx3++] = left_arr[idx1++];
        }
    }

    // If any element remains in left array add it directly into main array
    while (idx1 < left_length) {
        arr[idx3++] = left_arr[idx1++];
    }

    // Similarly if any element remain in right array add it directly into main array
    while (idx2 < right_length) {
        arr[idx3++] = right_arr[idx2++];
    }

    // Delete the array as they are just temporary arrays
    delete[] left_arr;
    delete[] right_arr;
}

// DIVIDING THE ARRAY
void divide (int start, int end, int * arr) {

    // Base case

    // If our start becomes greater than or eq
    if (start >= end) return;

    int mid = start + (end-start)/2;

    // Diving the array into two halves
    divide(start, mid, arr);
    divide(mid+1, end, arr);

    // Merging the two halves
    conquer(start, mid, end, arr);
}

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    divide(0,n-1,arr);

    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;

}