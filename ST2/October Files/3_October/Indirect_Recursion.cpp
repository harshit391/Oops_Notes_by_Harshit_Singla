/*

 Indirect Recursion

 Indirect recursion is a type of recursion in which a function calls another function,
 which then calls the first function again.

 In that Sense It is actually recurring but not using itself as a recursive call
 But Using Another function for Recursive call

 Example :- Print Number from n to 1 using Indirect Recursion

*/

#include<iostream>
using namespace std;

// Creating a prototype for function A So that It can be called by B
void A(int n);

void B(int n){
	// Base case
	if(n==0){
		return;
	}

	cout<<n<<endl;

    // If the prototype is not declared Then A is not called because B can't able to find the function

    // Declaring a Prototype tells us that The function is present somewhere in the code

	A(n-1);
}

void A(int n){
	// Base case
	if(n==0){
		return;
	}

	// Recursion
	cout<<n<<endl;
	B(n-1);
}

int main(){
	int n;

    cin >> n;


	A(n);
	return 0;
}