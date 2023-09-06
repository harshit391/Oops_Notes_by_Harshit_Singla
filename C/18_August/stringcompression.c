#include <stdio.h>

// COMPRESS STRING 

// You are given a String and you have to compress it in such a way that the amount in which a character is being repeated in a String it will be printed as Character concatenated with amount

// Example 

// Input :- aaaabbcccddaaeeyya
// Output :- a4b2c3d2a2e2y2a1

// Explanation 
// a repreated 4 time we get a4
// Similarly we get all the characters value

    


int main()
{
    char name[1001];

    // String Input
    scanf("%[^\n]%*c", name);

    int strlen = 0;


    // Count the String length entered
    for (int i=0;name[i]!='\0';i++)
    {
        strlen++;
    }

    // Result where out result String is being Stored
    char result[1001];

    // Set initial count to 1 as character is being there will be counted as 1
    int count = 1;

    // To Track the result index
    int idx = 0;

    // Loop while character is not equal to \0
    for (int i=0;i<strlen;i++)
    {
        // If character repeated increase the count by 1
        if (name[i]==name[i+1]) count++;
        else 
        {
            // It means character repeatition stops So Append the character in result array
            result[idx++] = name[i];

            // Set a low pointer to index where we have to append count in result string
            int low = idx;

            // If count exceeds 9 than append digits one by one in result converting them to character
            while (count>0)
            {
                char rem = count%10 + '0';
                result[idx++] = rem;
                count/=10;
            }

            // As the count appended in result string we know it will be appended in reverse order
            int high = idx-1;

            // So from low to high index Reverse the character in result string
            while (low<=high)
            {
                char temp = result[low];
                result[low] = result[high];
                result[high] = temp;

                low++;
                high--;
            }

            // Reset count to 1
            count = 1; 
        }
    }

    // Print out result as String
    printf("%s", result);

}