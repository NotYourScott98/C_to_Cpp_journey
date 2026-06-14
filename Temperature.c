// temperature calculator
#include <stdio.h>
int main()
{
float C , F;
printf("enter temperature in Fahrenheit:");
scanf("%f",&F);
C = (5*F - 160)/9;
printf("in centigrade %f",C);
return 0;
}