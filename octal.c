#include<stdio.h>
int main()
{
int i , rem , oct =0 , place = 1;
printf("enter an integer: ");
scanf("%d",&i);



  while (i>0)
  {
    rem= i%8;
    oct =oct+(rem*place);
    i = i/8;
    place = place*10;

  }
  printf("\noctal equivalent: (%d)8",oct);  
  return 0;
  }
    