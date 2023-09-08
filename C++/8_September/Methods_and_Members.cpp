#include <iostream>

using namespace std;

class Car{ /* declaring a class named Car*/
public:
    // Data Memebers of a Class Car
    int wheels  = 4;
    int color;

    //  Functions made inside Classes are called methods 
    int get_wheels()
    {
       return wheels;
    }
};

int main()
{
    Car Mustang; /* This is "object" of Class Car */

    return 0;
}