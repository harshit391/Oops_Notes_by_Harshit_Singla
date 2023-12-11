#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocating a Space by malloc
    int * ptr = (int *)malloc(10);

    // Basically malloc automatically assign memory even if it exceeds its static defined memory

    for (int i=0;i<25;i++) {
        int x;
        ptr[i] = i + 1;
    }

    // And we can access it without any problem
    for (int i=0;i<25;i++) {
        printf("%d\n", ptr[i]);
    }

    // Delete the memory to avoid memory leak
    free(ptr);
    ptr = NULL;
}