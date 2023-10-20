//
// Created by DELL on 18/09/2023.
//

#include<iostream>

using namespace std;

void incrementbyvalue(int a,int b){
    a = a+1;
    b = b+1;
}

void incrementbyreference(int *a,int *b){
    *a = *a+1;
    *b = *b+1;
}

int main(){
    int a = 1,b=2;
    // This will not update value because it works like a sepeartion
    incrementbyvalue(a,b);
    cout<< a <<" "<< b <<endl;

    // This will update value because now we are working on reference

    // SO it will update the values present at the address of the variables

    // Which will change their values in place in memory
    incrementbyreference(&a,&b);
    cout<< a <<" "<< b <<endl;
    return 0;
}
