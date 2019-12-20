/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

#include <stdio.h>
 
int main()
{
    int number, rem, sum = 0, i;
 
    printf("Enter a Number\n");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("Entered Number is perfect number");
    else
        printf("Entered Number is not a perfect number");
    return 0;
}




