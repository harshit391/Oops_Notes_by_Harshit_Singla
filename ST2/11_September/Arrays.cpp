// Arrays are basically when a number of buckets are joined together make an array

// They store in a contigious way like a single bucket has equal size 

// So if array first element is at 100 address then next element will be at address 100 + sizeof(data_type_of_array)

// If int => 4
// If char => 1

#include <iostream>

using namespace std;

int main()
{
    // data_type array_name[size_of_array] = {Initializing values}
    int a[5] = {1,2,3,4,5}; // Initialzing the array

    cout << a << endl; // Give address of first element of array

    cout << a[0] << endl; // Print first element of array

    // Indexing start from 0 in arrays

    // like in array a
    // a[0] = 1 => 100 (say its memory address)
    // a[1] = 2 => 104
    // a[2] = 3 => 108
    // a[3] = 4 => 112
    // a[4] = 5 => 116

    // a[5] => give index out of bound error

    // This is called contigous memory allocation

    // int a[5] = {1}; // Redeclaring same array , Then whole array got reset as
    // a[0] = 1 
    // a[1] = 0 
    // a[2] = 0 
    // a[3] = 0 
    // a[4] = 0 

    // int a[5]; // If declared without initializing

    //a[0] to a[4] gives 0 or garbage value

    // To get size of array

    // Bascially dividing the whole array size by data type size gives us the number of blocks in the array
    printf("%d", sizeof(a)/sizeof(int)); // => 5

    return 0;
}