#include <iostream>

using namespace std;

// Do while loop 

// It is a loop which execute a block of code and then it will check the condition
// If it is true it will run the block again

// Note Do while first execute then check

int main()
{   
    // Intialization
    int i = 1;

    // Do this set of code
    do
    {
        // Code
        cout << "Hello World!" << endl;

        // Update
        i++; 
    } while (i<10); // Cheking the condition after executing the block
    

}