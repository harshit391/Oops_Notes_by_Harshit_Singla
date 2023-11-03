//
// Created by DELL on 02/11/2023.
//

/*
 * There are n stairs, a person standing at the bottom wants to climb stairs to reach the nth stair.
 *
 * The person can climb at most m stairs at a time,
 *
 * the task is to count the number of ways that a person can reach at the top.
 */
#include <bits/stdc++.h>
using namespace std;

int ways(int n,int m){
    // base case
    if(n==0){
        return 1;
    }

    if(n<0){
        return 0;
    }

    // recursive case
    int way = 0;
    for(int i=1;i<=m;i++){
        way += ways(n-i,m);
    }
    return way;
}


int main(){
    int n,m;
    cin>>n>>m;
    cout<< ways(n,m);
    return 0;
}