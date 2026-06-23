#include <stdio.h>

int main()
{ 
    float prc, disc;
    printf("enter price: ");
    scanf("%f", &prc);
 
    if (prc > 5000)
    { 
        disc = prc - (prc * 10 / 100);
    }
    else if (prc >= 2000) // No need to check <= 5000, the 'else' handles it!
    {
        disc = prc - (prc * 5 / 100);
    }
    else
    { 
        // No discount for bills under 2000, they pay the exact price
        disc = prc;
    }
    
    printf("you have to pay %.2f\n", disc);
    return 0;
}
