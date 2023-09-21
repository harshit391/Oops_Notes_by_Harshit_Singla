//
// Created by DELL on 21/09/2023.
//

#include <iostream>

using namespace std;

int sorted(int arr[], int idx)
{
    if (idx==0) return 1;

    if (arr[idx-1] > arr[idx]) return 0;

    return sorted(arr, idx-1);
}

int main()
{
    int n;
    cin >> n;

    int arr[10000];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << sorted(arr, n-1);

}
