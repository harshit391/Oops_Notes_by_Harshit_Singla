//
// Created by DELL on 12/09/2023.
//

#include <iostream>

using namespace std;

// Functions are like a block seperately made to avoid rewriting the same code for different things

// Syntax :-

/*
return_type function_name(data_type parameter,......)
{
    Block of code we want to execute
}
*/

// Return type can be any data type , any data structure or just a void


// This is void function which is functioned to do something without returning anything
// Mainly used to Modify data structures in-place without creating a new space

// Now this function will help to print the array
// Now if we want to print any array then we just have to call this function
// This avoids rewriting the printing loop for array everytime

void print(int a[], int n)
{
//    int n = sizeof(a)/sizeof(a[0]);
//    we can't do it because array is passed using reference so it is not possible we should get length of array as a function parameter

    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}

// This is called in-place update
void update(int a[])
{
    // This will update the 2nd index value to 100
    a[2] = 100;
}

// Main function should always be in int
int main()
{
    int arr[] = {1,2,3,4,5};

    // Now this will help to print the array without writing the full code
    print(arr, sizeof(arr)/sizeof(arr[0]));
    cout<<endl;

    // This will update the array
    update(arr);

    // And now if you print the array will be updated in place
    print(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}


