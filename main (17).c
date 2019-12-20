/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
      int rev(int);
      int power(int);
      int sqroot(int);

main()
{
     
      int n,r1=0,r2=0,sq=0,p=0;
      printf(“\n to check if  a number is  ADAM number or not”);
      printf(“\n Enter any number =”);
      scanf(“%d”,&n);
      p=power(n);     
      r1=rev(p);     
      sq=(int)sqroot(r1);     
      r2=rev(sq);     
      if(n==r2)
      printf(“\n %d is an ADAM NUMNER”,n);
      else
      printf(“\n %d is not an ADAM NUMBER”,n);     
      getch();
}
int power(int n)
{
      int p;
      p=n*n;
}
int sqroot(int n)
{
      int sq=0;
      sq=(int)sqrt(n);
      return sq;
}
int rev(int n)
{
      int temp=0,r=0,t=0;
      temp=n;
      while(temp>0)
      {
            r=temp%10;
            t=t*10+r;
            temp=temp/10;
      }
      return t;
}



