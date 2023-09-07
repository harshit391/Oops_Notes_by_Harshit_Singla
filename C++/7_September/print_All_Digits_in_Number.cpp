// print all digits in a number

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        cout << n%10 << endl;
    }

    return 0;
}