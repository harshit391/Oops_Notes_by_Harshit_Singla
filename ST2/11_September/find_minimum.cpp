#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[99999];
    int min1 = 1000000;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[i]<min1) min1 = arr[i];
    }


    printf("%d\n",min1);

    return 0;
}