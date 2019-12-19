/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("enter op");
    scanf("%c",&op);
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%f",(float)a/b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        default:
        printf("invalid");
    }
    return 0;
}
