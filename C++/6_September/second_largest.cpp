#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    int max = 0;

    cin >> a >> b >> c;

    if (a > b && a > c) max = a;
    if (b > a && b > c) max = b;
    if (c > a && c > b) max = c;

    if (a < max && (a > b || a > c)) cout << a << endl;
    if (b < max && (b > a || b > c)) cout << b << endl;
    if (c < max && (c > b || a < c)) cout << c << endl;

    return 0;
}
