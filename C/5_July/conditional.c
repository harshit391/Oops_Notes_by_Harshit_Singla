#include <stdio.h>

// #define PI 3.14159

/* Works Same like If else statement nothing other than that */

#ifdef PI /* It means If that particular Macro is defined then just execute its intendated block */
    #define print(x) printf("%f\n",x)

#else  
    #define PI 0.14159 /* In else block which means macro is not defined So we defined the macro */
    #define print(x) printf("%f\n",x+3)

#endif /* Closing the If block is necessary */

// #undef PI // -> to undefine the PI

int main()
{
    print(PI);
    return 0;
}