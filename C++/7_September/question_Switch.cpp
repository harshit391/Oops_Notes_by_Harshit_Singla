#include <iostream>

// If marks of student is more than 30 pass
// If more than 80 Excellent
// Else Fail

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k=0;

    // if (n > 80) cout << "Excellent";

    // else if (n >= 30) cout << "Passed";

    // else cout << "Failed";

    if (n > 30) k=1;

    if (n > 80) k=2;

    switch (k)
    {
    case 1:
        cout << "Passed";
        break;
    case 2:
        cout << "Excellent";
        break;
    default:
        cout << "Failed";
        break;
    }
}