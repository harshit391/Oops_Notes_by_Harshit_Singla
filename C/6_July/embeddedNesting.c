#include <stdio.h>
#include <string.h>

// Embedded Function

typedef struct Aeroplane{
    char builtBy[50];
    int seats;
    int capacity;
    // Nested Struct
    struct Engine{
        char type[50];
        int power;
    } engine1,engine2;
    // But we cant access it outside this struct 
    // So we have to declare them inside aeroplane
} Aeroplane;

int main()
{
    Aeroplane boeing747 = {"Boeing",500,1000};
    strcpy(boeing747.engine1.type,"Main-Engine");
    strcpy(boeing747.engine2.type,"Side-Engine");
    boeing747.engine1.power = 750;
    boeing747.engine2.power = 450;
    printf("%s\n%s\n",boeing747.engine1.type,boeing747.engine2.type);
    return 0;
}