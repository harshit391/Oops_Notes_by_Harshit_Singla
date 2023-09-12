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

    for (int i=0;i<n-1;i++)
    {
        int minimum = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[minimum]>arr[j])
            {
                minimum = j;
            }
            int temp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

