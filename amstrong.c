#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rlast,q1,rmid,q2,l3,m3,s3,tot;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    rlast=num%10;
    q1=num/10;
    rmid=q1%10;
    q2=q1/10;
    l3=rlast*rlast*rlast;
    m3=rmid*rmid*rmid;
    s3=q2*q2*q2;
    tot=l3+m3+s3;
    printf("\n The total is : %d",tot);
    if(num==tot){
        printf("\n the number is amstrong");}
    else{
        printf("\n The number is not an amstrong");}
    return 0;
}
