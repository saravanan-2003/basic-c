
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int c,d,a=0;
   printf("\nEnter the two numbers to be swaped : ");
   scanf("%d%d",&c,&d);
   a=c;
   c=d;
   d=a;
   printf("\n%d\n%d\n",c,d);


    return 0;
}