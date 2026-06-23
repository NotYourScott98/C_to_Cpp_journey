#include <stdio.h>

int main()
{ 
 int d3 , d2 , d1 , n ,sum;
 printf("enter your three digit number");
 scanf("%d",&n);
 
 d3 = n%10;
 n = n/10;
 d2 = n%10;
 n = n/10;
 d1 = n%10;
 n = n/10;
 
 sum = d3+d2+d1;
 if (sum%7 == 0)
 {printf( "divisible by 7");}
 else
 { printf("the number isnt divisible by 7");}
 
 return 0;
 }
 