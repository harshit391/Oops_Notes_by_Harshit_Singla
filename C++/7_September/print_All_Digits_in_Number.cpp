// print all digits in a number

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Untill our number is greater than 0
    while (n > 0)
    {
        // Print the remainder of the entered number 
        cout << n%10 << endl;

        // Divide the number by 10 for next digit
        n/=10;
    }

    return 0;
}

// Explanation

// This is Simple math

// For example :- 1234

// 1234 % 10 => 4 ( Remainder when divide 1234 with 10 )
// n = n / 10 => n = 1234/10 => n = 123 ( Divide the number by 10 to erase the last digit)

