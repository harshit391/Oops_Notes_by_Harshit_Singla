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

    for (int i=0; i<n; i++) {
        arr[i] = q.top();
        q.pop();
    }

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;
    return 0;
}
