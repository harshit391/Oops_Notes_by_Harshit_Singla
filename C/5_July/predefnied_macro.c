#include <stdio.h>

int main()
{
    // Curremt Date
    printf("%s\n",__DATE__);

    // Current time
    printf("%s\n",__TIME__);

    // Current file we are working on
    printf("%s\n",__FILE__);

    // Current line we are in it if txt file is opened using a file pointer
    printf("%s\n",__LINE__); 

    // If we are not woking in ANSI standard return false otherwise true
    printf("%d",__STDC__);

    return 0;
}