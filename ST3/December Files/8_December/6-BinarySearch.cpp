#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m;
    cin >> n >> m;

    int ** arr = new int*[n];
    for (int i=0; i<n; i++) {
        arr[i] = new int[m];
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    int left = 0;
    int right = n-1;

    int target;
    cin >> target;

    int found = -1;
    while (left <= right) {
        int mid = left + (right-left)/2;

        if (arr[mid][0] == target) {
            found = mid;
            break;
        }
        else if (arr[mid][0] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    int row = found;
    if (row == -1) {
        row = right;
    }

    cout << row << endl;

    left = 0;
    right = m-1;

    while (left <= right) {
        int mid = left + (right-left)/2;

        if (arr[row][mid] == target) {
            cout << "Row Index :- " << row << " and Column Index :- " << mid << endl;

            for (int i=0; i<n; i++) {
                delete[] arr[i];
                arr[i] = nullptr;
            }

            delete[] arr;
            arr = nullptr;

            return 0;
        }

        else if (arr[row][mid] > target) {
            right = mid - 1;
        }

        else {
            left = mid + 1;
        }
    }

    cout << "Not Found" << endl;
    for (int i=0; i<n; i++) {
        delete[] arr[i];
        arr[i] = nullptr;
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}
