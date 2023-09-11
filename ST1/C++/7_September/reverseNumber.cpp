#include <iostream>

// Reverse the number

using namespace std;

int main()
{
    int n;
    int rev = 0;
    while (n > 0)
    {
        rev = rev*10 + (n%10);
        n/=10;
    }

    cout << rev << endl;

    return 0;
}

// Explanation 

// As we get last digits using modules

// WE just had to store them 

// Like Example : 1234

// last digits = n % 10 ( Gaining the last digits )
// Answer = answer * 10 + last digits ( Storing the last digits)
// number = number / 10 ( Divide the number to delete last digit )

// Current = 1234
// Rev = 0

// ------------------- WHILE ( Current > 0 ) -------------------
// Last digit = 4
// Rev = rev * 10 + 4
// Rev = 0*10 + 4
// Rev = 4
// Current = current/10 => 123

// Current = 123
// Rev = 4

// -----------------------

// Last digit = 3
// Rev = rev * 10 + 3
// Rev = 4*10 + 3
// Rev = 43
// Current = current/10 => 12

// Current = 12
// Rev = 43

// -----------------------

// Last digit = 2
// Rev = rev * 10 + 2
// Rev = 43*10 + 2
// Rev = 432
// Current = current/10 => 1

// Current = 1
// Rev = 432

// -----------------------

// Last digit = 1
// Rev = rev * 10 + 1
// Rev = 432*10 + 1
// Rev = 4321
// Current = current/10 => 0

// Current = 0
// Rev = 4321

// ----------- LOOP ENDED ------------

// WE get our answer as Rev = 4321 