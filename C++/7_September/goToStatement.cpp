#include <iostream>

using namespace std;

int main()
{
    goto label;

    cout << "This block" << endl;

    label : cout << "goto block" << endl;

    return 0;
}