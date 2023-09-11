// How the prepocessor directive is used in codes

// #include <iostream>

// # - preprocessor directives

// include - basically the # preprocessor directives command to include somthing

// <> - This brackets represents standard library 

// #include <> - It represents that the we need to include some standard library for our code 

// --------------------------------------------------------------------------------------------------------------------------

#include <iostream>

// I included some external code file as library 
#include "harshit.h"

// It means in the standard library iostream
// There exist a name space block
// And Inside that namespace block there is a function std that we want to use

using namespace std;


// In cpp putting return type int for main function is mandatory
// This is because any number aside 0 in cpp is considere a true value
// SO it needs to be returning something true to execute the function itself

int main()
{
    // Function made in that external file can be implemented or works here
    print();

    cout << endl;

    // We have two types of buffer - input and output buffer

    // Inside the iostream there is input buffer which is accessable by cin
    
    // cin basically extracts the values from input stream and store it in the variable defined

    // There is output buffer which is accessible by cout

    // cout basically displays the result using output stream 

    int x;

    cin >> x;

    // It means there is a block of x in memory
    // cin extract the value from input stream
    // And throw that value in x block in memeory

    cout << "The value of x is " << x;
    // To insert an extra thing in output steam with the value we are giving through a variable

    // It means inserting the value of x in output steam
    // And output buffer throws that value on our display
}

// Internal Processing of working of CPP File

// 1. prepro.cpp

// Preprocessor directive convert this cpp to i file
// i --> inserting all the header contents and functions

// 2. prepro.i

// After this Our compiler compile this i file to prepro.o
// o --> object code which convert our functionality used in code to machine language

// If there any exteranl library included so there comes a " Linker "
// Linker link the files inside our code

// 3. prepro.o

// At last an executable file is created which runs our program

// 4. prepro.exe 
// This is the main application file


// ----------------------------------------- DATA TYPES ------------------------------------------

// 1. Primitive
/**
 * Int
 * Char
 * Float - 4
 * Double - 8 (basic difference from float is size and number of decimal it can store)
 * Bool
*/

// 2. Derived
/**
 * Arrays
 * Strings
 * Char Arrays
 * Pointers
*/


// 3. User defined
/**
 * Struct
 * Union
 * Enum
 * Classes
 * Typedef
*/




