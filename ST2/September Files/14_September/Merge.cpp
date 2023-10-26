//
// Created by DELL on 14/09/2023.
//
#include <iostream>

using namespace std;

// Merge Two Sorted Arrays

// Main Driver Function of Merge Sort

// It takes value of first array , second array , length of first array , length of second array , and output array
void mergesort(const int nums1[], const int nums2[], int n1, int n2, int nums3[])
{
    // We take three indexes in total

    // Idx1 will track first array
    int idx1 = 0;

    // Idx2 will track second array
    int idx2 = 0;

    // Idx3 will track output array
    int idx3 = 0;

    // Now Idx1 will be iterated till n1 i.e. length of first array
    // and Idx2 will be iterated till n2 i.e. length of second array
    while (idx1 < n1 && idx2 < n2)
    {
        // Now Compare element in first array at idx1 with element in second array at idx2
        if (nums1[idx1] <= nums2[idx2])
        {
            // If element in first array is smaller than the element in second array
            // Then add it to output array at idx3

            // Also Update idx3 to idx3+1 and idx1 to idx1+1
            nums3[idx3++] = nums1[idx1++];
        }

        else if (nums1[idx1] > nums2[idx2]) {
            // If element in second array is smaller than the element in first array
            // Then add it to output array at idx3

            // Also update idx3 to idx3+1 and idx2 to idx2+1
            nums3[idx3++] = nums2[idx2++];
        }
    }

    // If any element of first array is left for adding
    // Add it to output array
    while (idx1 < n1)
    {
        nums3[idx3++] = nums1[idx1++];
    }

    // If any element of second array is left for adding
    // Add it to output array
    while (idx2 < n2)
    {
        nums3[idx3++] = nums2[idx2++];
    }
}

int main()
{
    // Declare two arrays with length 5
    int nums1[5] = {1,3,5,7,9};
    int nums2[5] = {2,4,6,8,10};

    // Output array
    int nums3[10];

    // Calling function
    mergesort(nums1, nums2, 5, 5 , nums3);

    // Displaying Sorted array in third array
    for (int i : nums3)
    {
        cout << i << " ";
    }

    return 0;
}




