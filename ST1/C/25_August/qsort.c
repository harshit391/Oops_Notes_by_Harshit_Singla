#include <stdio.h>
#include <stdlib.h>

// void pointer - Its is a pointer which can point to any data type
// We cant defrenece it directly - gives error
// We use type casting to derefer it


int comp(const void *a, const void *b) // Here a is constant void pointer
{
    // Ascending --> a - b
    // Descending --> b - a
    
    // Type caseting void pointer to int 

    // Firstly we type case a to int pointer
    // Then we derefer it to use its value
    return (*(int *)(a)) - (*(int *)(b));
}

void print (int arr[], int n)
{
    for (int i=0;i<n;i++)
    printf("%d ",arr[i]);

    printf("\n");
}

int main()
{
    int arr[] = {9,8,27,2,28,19,4,90};

    // qsort --> 4 args
    // 1. Array name
    // 2. Number of elements
    // 3. Size of 1 element
    // 4. Comparator Function with Const void pointers as Arguements

    int n = sizeof(arr)/sizeof(int);
    print(arr, n);
    printf("\n\nAfter Sorting:- \n");

    qsort(arr, n, sizeof(int), comp);

    print(arr, n);

    return 0;
}