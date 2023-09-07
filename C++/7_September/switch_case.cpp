#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "1 is entered";
        break;
    case 2:
        cout << "2 is entered";
        break;
    case 3:
        cout << "3 is entered";
        break;
    default:
        cout << "Other number than 1, 2, 3 is entered";
        break;
    }

    return 0;
}