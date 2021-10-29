
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("\n Enter the chaaracter :");
    scanf("%c",&character);
   switch(character)
   {
   case 'a':
       printf("\nentered string is vowel");
       break;
   case 'e':
       printf("\n The entered string is vowels");
       break;
   case 'i':
       printf("\n The entered string is vowels");
       break;
    case 'o':
        printf("\n The entered string is vowels");
        break;
    case 'u':
        printf("\n The entered string is vowels");
        break;
    default:
        printf("\n The entered string is consonants");
        break;
   }

    return 0;
}
