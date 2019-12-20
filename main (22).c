/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

#include<stdio.h>
int check_prime(int n);
 
int main(void)
{   
    
    int start, end;
    
    printf("Enter start: ");
    scanf("%d", &start);
    
    printf("Enter end: ");
    scanf("%d", &end);
    
    for(int i = start; i < end; i++)
    {
        if(check_prime(i) && check_prime(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2);
            i = i + 2; 
        }                
    }    
    
    return 0; 
}
 
int check_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

