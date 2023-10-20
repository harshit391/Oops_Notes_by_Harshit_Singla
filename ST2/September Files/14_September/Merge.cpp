//
// Created by DELL on 14/09/2023.
//
#include <iostream>

using namespace std;

void mergesort(const int nums1[], const int nums2[], int n1, int n2, int nums3[])
{
    int idx1 = 0;
    int idx2 = 0;
    int idx3 = 0;

    while (idx1 < n1 && idx2 < n2)
    {
        if (nums1[idx1] <= nums2[idx2])
        {
            nums3[idx3++] = nums1[idx1++];
        }

        else if (nums1[idx1] > nums2[idx2]) {
            nums3[idx3++] = nums2[idx2++];
        }
    }

    while (idx1 < n1)
    {
        nums3[idx3++] = nums1[idx1++];
    }

    while (idx2 < n2)
    {
        nums3[idx3++] = nums2[idx2++];
    }

}

int main()
{
    int nums1[5] = {1,3,5,7,9};
    int nums2[5] = {2,4,6,8,10};

    int nums3[10];

    mergesort(nums1, nums2, 5, 5 , nums3);

    for (int i : nums3)
    {
        cout << i << " ";
    }

    return 0;

}




