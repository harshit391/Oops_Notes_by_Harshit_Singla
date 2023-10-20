//
// Created by DELL on 15/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[99999];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int start = 0;
    int end = n-1;

    int found = -1;

    while (start > end)
    {
        int mid = start + (end-start)/2;

        if (arr[mid]==target)
        {
            found = mid;
        }

        else if (arr[mid]>target) start = mid + 1;

        else end = mid - 1;
    }

    if (found==-1) cout << end+1 << endl;

    else cout << found << endl;

    return 0;
}

