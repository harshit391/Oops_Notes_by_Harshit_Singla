#include <stdio.h>

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