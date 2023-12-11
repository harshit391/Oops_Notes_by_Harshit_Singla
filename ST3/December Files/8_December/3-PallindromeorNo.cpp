#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int temp = n;

    int rev = 0;
    while (n > 0) {
        rev = rev*10 + n%10;
        n/=10;
    }

    if (temp == rev) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;

}
