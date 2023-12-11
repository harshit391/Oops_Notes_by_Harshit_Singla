#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int * arr = new int[n];
    priority_queue<int> q;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        q.push(arr[i]);
    }

    int k;
    cin >> k;

    for (int i=1; i<k; i++) {
        q.pop();
    }

    cout << q.top() << endl;

    delete[] arr;
    arr = nullptr;
    return 0;

}
