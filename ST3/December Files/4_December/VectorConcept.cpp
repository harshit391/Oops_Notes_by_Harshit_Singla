#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> a(5);
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);

    for (int i=0; i<8; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    vector<int> b(5,10);
    b.push_back(3);
    b.push_back(2);
    b.push_back(1);

    for (int i=0; i<b.size(); i++) {
        cout << b[i] << " ";
    }

    b.pop_back();
    cout << endl;

    for (int i : b) {
        cout << i << " ";
    }
    return 0;

}
