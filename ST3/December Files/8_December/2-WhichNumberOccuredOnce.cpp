#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];

    cin >> arr[0];
    int k = arr[0];

    for (int i=1; i<n; i++) {
        cin >> arr[i];
        k^=arr[i];
    }

    cout << k << endl;

    delete[] arr;
    return 0;

}
