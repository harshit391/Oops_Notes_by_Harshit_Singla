//
// Created by DELL on 18/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    // This will store the address the a
    int *aptr = &a;

    // Three ways to access a value
    cout << a << endl;

    // You can say that & and * cancel each other
    cout << *(&a) << endl;

    // Now we are de referencing aptr which contains the address of a
    // So it will help us to access the value at address stored in aptr
    cout << *(aptr) << endl;


    // Declaring an array
    int arr[5] = {1,2,3,4,5};

    // By default arr gives address of its 0 index block
    cout << arr << endl;

    // It will help us to access the value at address of 0 index block which is its first element
    cout << *(arr) << endl;

    // As we know , it will move one block ahead which make the address of 1st index that is 2nd element of array
    cout << *(arr+1) << endl;

    // How deference
    // * -> ast redis

    // *(address) -> deference which makes the value stored at that address accessible to us

    // Way to print array by using pointers
    for (int i=0;i<5;i++) {
        cout << *(arr+i) << " ";
    }

    cout << endl;

    // It will somehow act different
    char ch = 'A';

    // It will work normally
    cout << ch << endl;

    // But in this Something unfamiliar happens because it will print character itself but we can't able to fetch its address
    cout << &ch << endl;

    return 0;

}