//
// Created by DELL on 02/11/2023.
//

/*
 * Take as input N, a number. Write a recursive function which prints counting from 0 to N in lexicographical order.
 *
 * In lexicographical (dictionary) order 10, 100 and 109 will be printed before 11.
 */

#include <bits/stdc++.h>

using namespace std;

void helper(int temp, int n, vector<int>& sol){
    if(temp > n) return;
    sol.push_back(temp);
    helper(temp*10, n, sol);
    if(temp%10!=9){
        helper(temp+1,n,sol);
    }
}

void lexRECURSIVE(int n){
    vector<int> sol;
    cout << 0 << " ";
    helper(1,n,sol);
    for(int i : sol){
        cout << i << " ";
    }
}

int main(){
    int n; cin >> n;
    cout << endl;
    lexRECURSIVE(n);
    return 0;
}