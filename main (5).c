/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
printf("Enter Single Digit Number : ");
     scanf("%d",&n);
     printf("-------------------------------");
     printf("\n\t");
     switch(n)
     {
          case 0:
               printf("ZERO");
               break;
          case 1:
               printf("ONE");
               break;
          case 2:
               printf("TWO");
               break;
          case 3:
               printf("THREE");
               break;
          case 4:
               printf("FOUR");
               break;
          case 5:
               printf("FIVE");
               break;
          case 6:
               printf("SIX");
               break;
          case 7:
               printf("SEVEN");
               break;
          case 8:
               printf("EIGHT");
               break;
          case 9:
               printf("NINE");
               break;
               default:
               printf("not a single digit number");
     }
     return 0;
}
