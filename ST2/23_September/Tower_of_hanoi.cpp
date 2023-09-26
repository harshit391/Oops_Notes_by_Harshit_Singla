//
// Created by DELL on 25/09/2023.
//

#include<iostream>

using namespace std;

void towerofhanoi(int n,char source,char helper,char destination) {
    if (n == 0) {
        return;
    }

    towerofhanoi(n - 1, source, destination, helper);

    cout << "place " << n << "th plate from " << source << " to " << destination << endl;

    towerofhanoi(n - 1, helper, source, destination);
}
int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,'a','b','c');
    return 0;
}
