#include <bits/stdc++.h>

using namespace std;

int main() {

    map<int, int> mp;

    int n;
    cin >> n;

    vector<int> v(n);


    for (int i=0; i<n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<int> res;

    int count = 1;
    for (int i=1; i<n; i++) {
        if (v[i]==v[i-1]) {
            count++;
        } else {
            res.push_back(count);
            count = 1;
        }
    }

    res.push_back(count);

    auto i = res.begin();
    while (i != res.end()) {
        cout << *i << " ";
        i++;
    }

    return 0;
}
