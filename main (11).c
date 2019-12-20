/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/


#include<stdio.h>
int main()
{
	int n,p,digit,i=0,count=0,sum=0;
	
	printf("enter any integer number:\n");
	scanf("%d",&n);
	
	p=n;
	
	while(n!=0)
	{
		digit=n%10;
		sum+=digit;
		
		count++;
		n=n/10;
	}
	
	printf("Total digit present in number %d=%d\n",p,count);
	printf("Sum of all digit of the number %d=%d\n",p,sum);
 
	return 0;
}
