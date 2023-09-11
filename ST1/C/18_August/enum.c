#include <stdio.h>

// enum week { // Indexing start from 0 by Default
//     Sunday=1, // Now Indexing start from 1 
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// };

enum week { // Indexing start from 0 by Default
    Sunday=10, // Now Indexing start from 10 
    Monday,  // Assigned 11
    Tuesday=20, // If assigned 20
    Wednesday, // Move to 21
    Thursday, // 22 and so on....
    Friday,
    Saturday
};

int main()
{
    enum week day;
    day = Wednesday;

    printf("%d\n", day); // Wednesday index is 3 but if Sunday assigned to 1 then It gives 4
    return 0;
}

