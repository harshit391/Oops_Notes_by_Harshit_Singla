#include <stdio.h>
#include <string.h>

typedef struct Str{
    int arr[5];
} Str;

// By Reference and changes get reflected through main
void increment(Str *var, int n)
{
    for (int i=0;i<n;i++)
    {
        (*var).arr[i]++;
        printf("%d\t",(*var).arr[i]);
    }
}

// // By Value but changes won't get reflected in main
// void increment(Str var, int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         (var).arr[i]++;
//         printf("%d\t",(var).arr[i]);
//     }
// }

void print(Str var,int n)
{
    printf("\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",var.arr[i]);
    }
}

int main()
{
    Str var;
    var.arr[0] = 10;
    var.arr[1] = 20;
    var.arr[2] = 30;
    var.arr[3] = 40;
    var.arr[4] = 50;

    increment(&var, 5);
    print(var, 5);
    return 0;
}

