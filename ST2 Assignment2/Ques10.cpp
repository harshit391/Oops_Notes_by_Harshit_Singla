//
// Created by DELL on 03/11/2023.
//

/*
Given two sorted arrays, find their union and intersection.
Example:

Input: arr1[] = {1, 3, 4, 5, 7}
arr2[] = {2, 3, 5, 6}

Output:
Union : {1, 2, 3, 4, 5, 6, 7}
Intersection : {3, 5}

Input: arr1[] = {2, 5, 6}
arr2[] = {4, 6, 8, 10}

Output:
Union : {2, 4, 5, 6, 8, 10}
Intersection : {6}
 */

#include <bits/stdc++.h>

using namespace std;

void arrayUnionAndIntersection(int * arr1, int * arr2, int n1, int n2) {
    vector<int> un;
    vector<int> in;
    int idx1 = 0;
    int idx2 = 0;

    while (idx1 < n1 && idx2 < n2) {
        if (arr1[idx1]==arr2[idx2]) {
            in.push_back(arr1[idx1]);
            idx1++;
            idx2++;
        } else {
           if (arr1[idx1] > arr2[idx2]) {
               un.push_back(arr2[idx2++]);
           } else {
               un.push_back(arr1[idx1++]);
           }
        }
    }
    cout << "Union:- ";
    for (int k : un) {
        cout << k << " ";
    }
    cout << endl << "Intersection:- ";
    for (int k : in) {
        cout << k << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int * arr1 = new int[n];
    for (int i=0;i<n;i++) {cin >> arr1[i];}

    int m;
    cin >> m;

    int * arr2 = new int[m];
    for (int i=0;i<m;i++) {cin >> arr2[i];}

    arrayUnionAndIntersection(arr1, arr2, n, m);

    return 0;

}