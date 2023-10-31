//
// Created by DELL on 04/10/2023.
//

/*
 * Tail recursion is a type of recursion
 * where the recursive call is the last thing the function does before returning.
 *
 * This means that the function does not need to save any state before making the recursive call,
 * and the compiler can optimize the function to use a constant amount of stack space.
 */

#include <iostream>

using namespace std;

int fact(int n, int ans) {

    // After this Function pop out from stack without doing anything
    // Because they don't have anything to do ... LOL
    if (n<=1) return ans;

    return fact(n-1,ans*n);
}

int main() {
    int n = 5;
    cout << fact(n,1) << endl;
    return 0;
}
