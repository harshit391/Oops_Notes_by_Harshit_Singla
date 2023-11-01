#include<iostream>
#include<cstring>
using namespace std;

/*
 * Constructor is the best way to set values for the class fields
 *
 * Fields are basically the data members of the class
 *
 * via Constructor when the class object is being declared
 * It sets the values immediately like a function call
 *
 * Its just that the class object will be declared with parameters of data field
 * and constructor set the values of class fields using the parametric values passed
 * during object declaration

 */
class Employee{
	char name[100];
	int id;
public:
	Employee(char *n,int i){ // constructor

        // id is set to i
		id = i;

        // String name is set to n
		strcpy(name,n);

		cout<< "constructor has been called"<<endl;
	}
	void display(){
		cout<< "name: "<<name<<" id: "<<id<<endl;
	}
};

int main(){
	char a[100] = "abc";

    // A class object is declared with the parameters
	Employee e1(a,123);

    // And the values is being set by class constructor
	e1.display();
	return 0;
}




