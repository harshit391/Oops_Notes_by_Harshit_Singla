#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    priority_queue<int> q;
    for (int i=0; i<n; i++){
        q.push(arr[i]);
    }

    for (int i=0; i<4; i++) {
        q.pop();
    }

    cout << q.top() << endl;

    return 0;
}
