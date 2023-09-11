#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    char c;

    while (cin >> c)
    {
        if ((c >= 65 && c <= 97) || (c >= 97 && c<=122)) count++;
    }

    cout << count << endl;
}