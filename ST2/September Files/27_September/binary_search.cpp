//
// Created by DELL on 27/09/2023.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int low = 0;
    int high = n-1;

    int target;
    cin >> target;

    while (low <= high)
    {
        int mid = (low+high)>>1;

        if (arr[mid]==target){
            cout << "Element found at " << mid << " Index";
            return 0;
        }

        else if (arr[mid] > target){
            high = mid - 1;
        }

        else low = mid + 1;
    }

    cout << "Not Found" << endl;
    return 0;
}
