#include <bits/stdc++.h>

using namespace std;

int main() {

    int size1,size2;
    cin >> size1 >> size2;

    if (size1 != size2) {
        return 0;
    }

    vector<int> v1(size1);
    vector<int> v2(size2);
    vector<int> v3(size1);

    for (int i=0; i<size1; i++) {
        cin >> v1[i];
    }

    for (int i=0; i<size2; i++) {
        cin >> v2[i];
    }

    for (int i=0; i<size1; i++) {
        v3[i] = v1[i] + v2[i];
    }

    cout << "[";
    for (int i=0; i<size1-1; i++) {
        cout << v3[i] << ", ";
    }
    cout << v3[v3.size()-1] << "]";

    return 0;

}
