#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nEnter the num : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n the entered number is even  %d",num);
    else
        printf("\n The entered number is odd ",num);

    return 0;
}
