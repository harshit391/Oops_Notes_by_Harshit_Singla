//
// Created by DELL on 30/10/2023.
//

#include <bits/stdc++.h>

using namespace std;

int calculate_score(int * arr, int start, int end) {
    if (start >= end) {
        return 0;
    }

    for (int i=start;i<end;i++) {
        int left = 0;
        for (int j=start;j<=i;j++) {
            left += arr[j];
        }
        int right = 0;
        for (int j=i+1;j<=end;j++) {
            right += arr[j];
        }
        if (left == right) {
            return 1 + max(calculate_score(arr, start, i), calculate_score(arr, i+1,end));
        }
    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int * arr = new int[n];

        for (int i=0;i<n;i++) {cin >> arr[i];}

        cout << calculate_score(arr, 0, n-1) << endl;
    }

    return 0;

}