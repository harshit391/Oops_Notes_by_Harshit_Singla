#include <bits/stdc++.h>

using namespace std;

void merge(int * result, const int * arr1, const int * arr2, int n1, int n2) {
    int i=0;
    int j=0;
    int k=0;

    while (i < n1 && j < n2) {
        if (arr1[i] > arr2[j]) {
            result[k++] = arr2[j++];
        } else {
            result[k++] = arr1[i++];
        }
    }

    while (i < n1) {
        result[k++] = arr1[i++];
    }

    while (j < n2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int n1,n2;

    cin >> n1;

    int * arr1 = new int[n1];

    for (int i=0; i<n1; i++) { cin >> arr1[i];}

    cin >> n2;

    int * arr2 = new int[n2];

    for (int i=0; i<n2; i++) { cin >> arr2[i];}

    int * arr3 = new int[n1+n2];

    merge(arr3, arr1, arr2, n1, n2);

    for (int i=0; i<n1+n2; i++) {
        cout << arr3[i] << " ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    arr1 = nullptr;
    arr2 = nullptr;
    arr3 = nullptr;

    return 0;

}
