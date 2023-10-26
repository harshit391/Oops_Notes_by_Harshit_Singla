//
// Created by DELL on 15/09/2023.
//

// Found the Position in a Sorted Array where Element can be Inserted

#include <iostream>

using namespace std;

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

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int mid = start + (end-start)/2;

        if (arr[mid]==target) {

            // If the element already in the list just print mid-index
            cout << mid << endl;
            return 0;
        }

        else if (arr[mid]>target) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    // If element not in the list print end + 1 index because end always stores index which have element smaller than target
    cout << end+1 << endl;
    return 0;
}

