#include <stdio.h>
#include <stdlib.h>

int main()
{
    float len,bre,rad,prem,area,cir_aea,circum;
    printf("\nEnter the length breath and radius : ");
    scanf("%f%f%f",&len,&bre,&rad);
    prem=2*(len+bre);
    area=len*bre;
    cir_aea=3.14*rad*rad;
    circum=2*3.14*rad;
    printf("the  perimeter of rectangel is : %f",prem);
    printf("\nThe area of rectangle is : %f",area);
    printf("\nThe area of circle is : %f",cir_aea);
    printf("\nThe circumfrance of circle is : %f",circum);
    return 0;
}