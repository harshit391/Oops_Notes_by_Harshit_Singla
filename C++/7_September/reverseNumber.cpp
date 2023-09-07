#include <iostream>

// Reverse the number

using namespace std;

int main()
{
    int n;
    int rev = 0;
    // while (n > 0)
    // {
    //     rev = rev*10 + (n%10);
    //     n/=10;
    // }

    for (cin >> n;n>0;n/=10)
    {
        rev = rev*10 + (n%10);
    }

    cout << rev << endl;

    return 0;
}