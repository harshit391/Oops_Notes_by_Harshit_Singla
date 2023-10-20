#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // int arr[n]; // WE shouldn't write like this because cin takes value in runtime while array declared at compile time
    // So it is not ethical to declare arrays like this

    int a[99999]; // Maximum size for an integer array is 10^6-1

    for (int i=0;i<n;i++)
    cin >> a[i];

    for (int i=0;i<n;i++)
    cout << a[i] << endl;

    return 0;
}