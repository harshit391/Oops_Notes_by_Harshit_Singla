#include<iostream>
using namespace std;

/*
 * Non-tail recursion is a type of recursion
 * where the recursive call is not the last thing the function does before returning.
 *
 * This means that the function needs to save some state before making the recursive call,
 * and the compiler cannot optimize the function to use a constant amount of stack space.
 */


void print(int n){
	if(n==0) {
        return;
    }

    // The Function is being recalled and saved in Stack
	print(n-1);

    // And There is still work to do by the function being saved in the stack
	cout<<n<<endl;
}

int main(){
	int n;

    cin >> n;

	print(n);
	return 0;
}