#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int max = 0;

    while (n--)
    {
        int x;
        cin >> x;

        max = (max<x)?x:max;
        
    }

    cout << max << endl;
}