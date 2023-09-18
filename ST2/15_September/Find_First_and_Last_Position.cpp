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

    while (start < end)
    {
        int mid = start + (end-start)/2;

        if (arr[mid]==target)
        {
            found = mid;
            break;
        }

        else if (arr[mid]>target) end = mid -1;

        else start = mid + 1;
    }

    int i=0;
    int k = found+1;
    int temp = found;
    int j = n-1;

    int startposition = -1;
    int endposition = -1;


    while (i <= found)
    {
        int mid = i + (found-i)/2;

        if (arr[mid]==arr[temp])
        {
            startposition = mid;
            i = mid+1;
        }

        else if (arr[mid] > arr[temp])
        {
            found = mid - 1;
        }

        else i = mid + 1;
    }

    while (k < j)
    {
        int mid = k + (j-k)/2;

        if (arr[mid]==arr[k]) {
            endposition = mid;
            j = mid-1;
        }

        else if (arr[mid] > arr[found])
        {
            j = mid - 1;
        }

        else k = mid + 1;
    }

    if (startposition==-1) startposition = found;

    cout << "Start Position :- " << startposition << " End Position :- " << endposition << endl;

    return 0;


}
