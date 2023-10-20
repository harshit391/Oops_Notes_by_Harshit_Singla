//
// Created by DELL on 18/09/2023.
//

#include <iostream>

using namespace std;

int main()
{
    // We can declare character array in form of string which automatically adds a termination character after t
    char ch[50] = "Harshit";

    // We can declare a character and then initialize it by taking every index
    char cha[100];
    cha[0] = '1';
    cha[1] = '2';
    cha[2] = '3';

    // This is the termination character being used to make the compiler know that our String is ended
    cha[3] = '\0';

    // Or we can initialize the ch3 by this
    char ch3[100] = {'H','a','r','s','h','i','t'};

    cout << ch << endl;
    cout << cha << endl;
    cout << ch3 << endl;


    return 0;
}
