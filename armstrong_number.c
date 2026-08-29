#include <stdio.h>

int main() 
{
    int i, d3, d2, d1, temp;

    i = 100;
    while (i <= 500) 
    {
        temp = i; // Copy i so we don't alter the loop counter
        
        d3 = temp % 10;       // Extracts the last digit
        temp = temp / 10;
        
        d2 = temp % 10;       // Extracts the middle digit
        d1 = temp / 10;       // Extracts the first digit

        // Check if it is an Armstrong number
        if (i == (d1*d1*d1 + d2*d2*d2 + d3*d3*d3)) 
        {
            printf("%d\n", i);
        }
        
        i++; // Safely increments to the next number
    }

    return 0;
}
