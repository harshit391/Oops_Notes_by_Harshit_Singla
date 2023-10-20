//
// Created by DELL on 04/10/2023.
//

#include <iostream>

using namespace std;

int fact(int n, int ans) {
    if (n<=1) return ans;
    return fact(n-1,ans*n);
}

int main() {
    int n = 5;
    cout << fact(n,1) << endl;
    return 0;
}
