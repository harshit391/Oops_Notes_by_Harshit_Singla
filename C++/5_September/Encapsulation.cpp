#include <iostream>

// It is the mechanism of wrapping the data and the code that operates on that data into a single unit. 
// This makes the data accessible only through the code in the unit, 
// thus preventing unauthorized access.

using namespace std;

// For example there is class about a car
class Car{
    // We have to keep the price private so that no one should have power to change it
    // So we kept price in private block which make it accessible only in the Car class 

private:
    int price = 100;

    // But like the seller company should have access to the discount So we create seperate functions to set discount in public block
    // This make the functions declared in public block to be accessible outside the Car class
public:
    // So in public we can just set price to whatever we want as per discount by seller
    void set_price(int x)
    {
        if (x>50)
        {
            price = 50;
        }
        else 
        {
            price = price - x;
        }
    }

    // And to get the manipulated price we make a seperate function

    // Now as you can see we can't directly manipulate the private price but we can return its value to know whats the price
    // This makes it only authorised to a specific person and unauthorized person only get to know the price
    // They can't change it as it is in private block
    int get_price()
    {
        return price;
    }
};

int main()
{
    // Initializing a Car object name BMW
    Car BMW;
    // BMW.price = 0; --> Now if we keep price in public someone will manipulate it easily which lead to loss of Company 

    BMW.set_price(90); // Yeah but seller has power to set discount so he/she can use the set price function to give the discount as per they wish

    // At last to show the price to user we use get price function in public which only show the price
    // It doesn't give any access to manipulate the prize
    printf("%d\n",BMW.get_price());
}