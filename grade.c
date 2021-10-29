#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tamil,English,Maths,Science,Social,Average,Total;
    printf("\n Enter the Five subject Mark : ");
    scanf("%d%d%d%d%d",&Tamil,&English,&Maths,&Science,&Social);
    Total=Tamil+English+Maths+Science+Social;
    Average=Total/5;
    printf("\n%d",Average);
    printf("\n%d",Total);
    if(Average>=90)
        printf("\nA grade");
    else if(Average>80&&Average<=89)
        printf("\nB Grade");
    else if(Average>70&&Average<=79)
        printf("\nC Grade");
    else if(Average>60&&Average<=69)
        printf("\nD Grade");
    else
        printf("\nE Grade");
    return 0;
}
