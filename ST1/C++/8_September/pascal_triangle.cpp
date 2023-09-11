#include <iostream>

using namespace std;

// Pascal Triangle :-

// if n = 5

// Then Traingle will be

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// Proper Simulation to show what is Pascal Triangle 

// Leetcode Problem :- 118
// https://leetcode.com/problems/pascals-triangle/


int main()
{
    int n = 5;

    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<=n-i;j++)
        printf(" ");

        int c =1;
        for (int j=1;j<=i;j++)
        {
            printf("%d ", c);
            c = c*(i-j)/j;
        }
        printf("\n");
    }

    return 0;
}