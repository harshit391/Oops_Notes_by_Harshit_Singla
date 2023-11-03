//
// Created by DELL on 03/11/2023.
//

/*
 Chef has invented 1-minute instant Noodles.
 As the name suggests each packet takes exactly 1 minute to cook.
 Chef's restaurant has X stoves and only 1 packet can be cooked in a single stove at any minute.
 How many customers can Chef serve in Y minutes of each customer orders exactly 1 packet of noodles ?

 Input format
 The first and only line of input contains two space-separated integers X and Y - the numbers of stoves and the number of minutes, respectively

 Output Format
 Print a single integer, the maximum number of customers Chef can serve in Y minues

 Constraints
 1 <= X,Y <= 1000

 Sample 1 :
 Input
 3 7

 Output
 21
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    cout << a*b << endl;

    return 0;
}