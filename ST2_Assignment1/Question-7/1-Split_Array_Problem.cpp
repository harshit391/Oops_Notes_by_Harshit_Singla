//
// Created by DELL on 03/11/2023.
//

/*
 * Take as input N, a number. Take N more inputs and store that in an array.

 a. Write a recursive function which counts the number of ways the array could be split in two groups,
 so that the sum of items in both groups is equal.
 Each number in the array must belong to one of the two groups.
 Print the value returned.

 b. Write a recursive function which keeps track of ways an array could be split in two groups,
 so that the sum of items in both groups is equal.
 Each number in the array must belong to one of the two groups.
 Return type of function should be void.
 Print the two groups, each time you find a successful split.

 */

#include <bits/stdc++.h>

using namespace std;

static int counter = 0;

void split(vector<int> main, int index, vector<int>& arr1, vector<int>& arr2, int sum1, int sum2) {
    if (index == main.size()) {
        if (sum1 == sum2) {
            counter++;
            for (int i : arr1) cout << i << " ";
            cout << " and ";
            for (int i : arr2) cout << i << " ";
            cout << endl;
        }
        return;
    }

    arr1.push_back(main[index]);
    split(main, index+1, arr1, arr2, sum1+main[index], sum2);
    arr1.pop_back();

    arr2.push_back(main[index]);
    split(main, index+1, arr1, arr2, sum1, sum2+main[index]);
    arr2.pop_back();
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    vector<int> arr1;
    vector<int> arr2;

    split(arr, 0, arr1, arr2, 0 ,0);

    cout << counter << endl;
    return 0;
}


