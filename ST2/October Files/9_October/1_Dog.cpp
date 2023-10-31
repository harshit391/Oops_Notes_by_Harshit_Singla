#include <bits/stdc++.h>
using namespace std;

// Create a Dog class

// Keep its name and species and age private

// In Public :-
// Create three functions
// To get its age
// To get its name
// To get its species

// But only declare prototype in class and declare the whole function outside of class

class Dog{
private:
	char name[100];
	char species[100];
	int age;
public:
	void set(char *n,char * s,int a);
	int get_age();
	char * get_name();
	char * get_species();
};

// This :: is called scope resolution operator
void Dog::set(char *n,char *s,int a){
	strcpy(name,n);
	strcpy(species,s);
	age = a;
}

int Dog::get_age(){
	return age;
}

char * Dog::get_name(){
	return name;
}

char * Dog::get_species(){
	return species;
}

int main(){
	Dog d;
	char name[100] = "abc";
	char species[100] = "pug";
	d.set(name,species,10);
	cout<<"age: "<<d.get_age()<<endl;
	cout<<"species: "<<d.get_species()<<endl;
	cout<<"name: "<<d.get_name()<<endl;
	return 0;
}