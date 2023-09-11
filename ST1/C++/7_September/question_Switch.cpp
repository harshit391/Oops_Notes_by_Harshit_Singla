#include <iostream>

// If marks of student is more than 30 pass
// If more than 80 Excellent
// Else Fail

// Switch can only check a particular case not some conditional case 

// The value is pre planned that this will surely come 

// Where as in conditions multiple values are being checked which is not possible in switch

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k=0;


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