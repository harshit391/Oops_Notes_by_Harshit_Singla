//
// Created by DELL on 30/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * arr = new int[n];
    int sum = 0;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
        int num = arr[i];
        while (num > 0) {
            sum += num%10;
            num/=10;
        }
    }

    if (sum%3==0) cout << "1" << endl;
    else cout << "0" << endl;

    return 0;

}
