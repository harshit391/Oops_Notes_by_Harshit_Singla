//
// Created by DELL on 27/09/2023.
//

// Algorithm called Stair Case Search

#include <iostream>

using namespace std;

int main(){

    int matrix[4][4] ={
            {1,5,9,10},
            {12,15,19,20},
            {25,26,29,31},
            {36,37,38,39}
    };

    int target = 8;

    int low = 0;
    int high = 3;


    while (matrix[low][high] < target)
    {
        low++;
    }
    while (matrix[low][high] > target)
    {
        high--;
    }

    if (matrix[low][high]==target)
    cout << "Element present at " << low << " row and " << high << " column";

    else cout << "Not found";

    return 0;



}