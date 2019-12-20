/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int num, sqr, temp, last;
    int n =0;
 
    printf("Enter a number \n");
    scanf("%d",&num);
 
    sqr = num*num;  
    temp = num;
 

    while(temp>0){
        n++;
        temp = temp/10;
    }
 

    int den = floor(pow(10,n));
    last = sqr % den;
 
    if(last == num)
        printf("Automorphic number \n");
    else
        printf("Not Automorphic \n");
 
    return 0;
}




