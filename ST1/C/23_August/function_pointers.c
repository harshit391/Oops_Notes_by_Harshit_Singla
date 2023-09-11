#include <stdio.h>

inline static int compare(int a, int b)
{
    return a>b;
}

int add (int a, int b)
{
    return a+b;
}

int (*fptr)(int, int);

int main()
{
    fptr = &compare;

    // fptr = add;
    printf("%x\n",fptr);

    // printf("%d\n",fptr(2,3)); // This will also work
    printf("%d\n",(*fptr)(2,3));

    int a;
    scanf("%d",&a);

    int arr[a];
    for (int i=0;i<a;i++)
    scanf("%d",&arr[i]);

    for (int i=0;i<a;i++)
    {
        for (int j=0;j<a-i;j++)
        {
            if (compare(arr[j],arr[j+1]))
            {
                // one line swap
                arr[j+1] = arr[j] + arr[j+1] - (arr[j]=arr[j+1]);
            }
        }
    }

    printf("In increasing Order:- ");
    for (int i=0;i<a;i++)
    printf("%d ",arr[i]);
    printf("\n");

    for (int i=0;i<a;i++)
    {
        for (int j=0;j<a-1;j++)
        {
            if (compare(arr[j+1],arr[j]))
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("In Decreasing Order:- ");
    for (int i=0;i<a;i++)
    printf("%d ",arr[i]);
    printf("\n");

    return 0;



}