#include <iostream>

using namespace std;

int main()
{
    int n;

    // IN input steam cin 

    // cin reads values seggregated by a white space character
    // Or we can space it split values based on limiter whitespace character - (only to explain things not happen in reality)
    cin >> n;

    int i = 1;
    double sum = 0;

    while (i<=n)
    {
        int x;
        cin >> x;
        sum += x;
        i++;
    }

    // Only prints in integer form
    cout << sum << endl;

    // TO print in another data type format
    printf("%.2f", sum/5);
} 
