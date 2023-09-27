//
// Created by DELL on 26/09/2023.
//

/* We have to go to mth stair and there is total n steps stair*/
/* But we can take upto 2 steps at a time */
/* Calculate number of ways to do so*/

#include <iostream>

using namespace std;

int ways(int n, int m){
    if (n==0) return 1;

    if (n<0) return 0;

    int way = 0;
    for (int i=1;i<=m;i++){
        way += ways(n-i,m);
    }

    return way;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << ways(n,m);
    return 0;
}
