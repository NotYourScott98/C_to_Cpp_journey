#include <stdio.h>

int main() 
{
    long int n, revnum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%ld", &n);

    // Using a while loop makes the logic dynamic for any number of digits
    while (n != 0) 
    {
        remainder = n % 10;               // 1. Peel off the last digit
        revnum = (revnum * 10) + remainder; // 2. Shift existing reversed digits left and add new one
        n = n / 10;                       // 3. Shave off the last digit from the original number
    }

    printf("The reversed number is: %ld\n", revnum);

    return 0;
}

