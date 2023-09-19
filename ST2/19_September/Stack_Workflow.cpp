//
// Created by DELL on 19/09/2023.
//

#include <iostream>

using namespace std;

/**
 * During Function calls System fills the functions in a stack type mode in memory
 */

int sub(int a, int b)
{
    return a-b;
}

int add(int a, int b)
{
    cout << sub(a,b) << endl;
    return a+b;
}

int main()
{
   int a = 10;
   int b = 20;

   cout << add(a,b) << endl;

   return 0;
}

/**
* Stack Workflow :-
 *
 * Initially the stack is empty
 * Stack = []
 *
 * After the main function being called
 *
 * Stack := [
 * main
 * ]
 *
 * In the main add function being called
 *
 * Stack = [
 * add
 * main
 * ]
 *
 * Now at the top is add function so it will execute add function first
 *
 * In the add sub function being called
 *
 * SO Stack = [
 * sub
 * add
 * main
 * ]
 *
 * Now at the top is sub function so it will execute first
 *
 * Now as the sub function executed successfully
 *
 * Stack becomes = [
 * add
 * main
 * ]
 *
 * Now add function will be continued after the sub calling code
 * And it will execute successfully
 *
 * Stack becomes = [
 * main
 * ]
 *
 * Now Main function will execute after add calling block
 *
 * And after the main function executed
 * Stack becomes = []
 *
 * which tells the system that all the processes ended so now we can end the program
*/