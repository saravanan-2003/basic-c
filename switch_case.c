#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantity,team=15,tot_tea,tot_cof,coffem=20,milkm=30,tot_milkm,menu;
    printf("\n  MENU CARD ");
    printf("\n TEA   ==1");
    printf("\n COFFE ==2");
    printf("\n MILK  ==3");
    scanf("\n%d",&menu);
    switch(menu)
    {
    case 1:
        {
        printf(" \n The menu is taken as Tea");
        printf("\n Enter the  Quantity :");
        scanf("%d",&quantity);
        tot_tea=quantity*team;
        printf("\n The total amount is : %d",tot_tea);
        break;
        }
     case 2:
        {
        printf(" \n The menu is taken as coffe");
        printf("\n Enter the  Quantity :");
        scanf("%d",&quantity);
        tot_cof=quantity*coffem;
        printf("\n The total amount is : %d",tot_cof);
        break;
        }
     case 3:
        {
        printf(" \n The menu is taken as milk");
        printf("\n Enter the  Quantity :");
        scanf("%d",&quantity);
        tot_milkm=quantity*milkm;
        printf("\n The total amount is : %d",tot_milkm);
        break;
        }
    }
    return 0;
}