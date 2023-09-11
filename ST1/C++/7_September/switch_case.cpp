#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n /* The variable containing the value on which we have to check */)
    {
    case 1 /* This is like is value of variable equal to 1*/:
        cout << "1 is entered"; /* Execute this */
        break; /* And break so that other cases won't get executed*/
    case 2:
        cout << "2 is entered";
        break; /* IF this break weren't here it will executed all the rest of the cases below it*/
    case 3:
        cout << "3 is entered";
        break;
    default:
        cout << "Other number than 1, 2, 3 is entered"; /* If the entered value is other than the cases mentioned this block get executed */
        break;
    }

    return 0;
}