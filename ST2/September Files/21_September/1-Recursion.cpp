//
// Created by DELL on 21/09/2023.
//

/* PMI

Principal of Mathematical Induction

1. For k = 0, we know the Answer
2. For k = n-1, we assume
3. For k = n, we prove that answer is correct

*/

#include <iostream>

using namespace std;

// Storing Values in Stack to Print in Increasing Order
// Space Complexity - O[n]
// Time Complexity - O[n]
void print_using_recursion_in_increasing_order(int n) {
    if (n==0) return;

    print_using_recursion_in_increasing_order(n-1);
    cout << n << " ";
}

// Without Storing Values in Stack to Print in Decreasing Order
// Space Complexity - O[1]
// Time Complexity - O[n]
void print_using_recursion_in_decreasing_order(int n) {
    if (n==0) return;

    cout << n << " ";
    print_using_recursion_in_decreasing_order(n-1);
}

int main() {
    print_using_recursion_in_decreasing_order(6);
    cout << endl;
    print_using_recursion_in_increasing_order(6);
}