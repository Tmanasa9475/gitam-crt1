#include<stdio.h>
int main()
{
int i=-1,j=1;
int k;
k=++i||++j//0,-1,1;
printf("i=%d,j=%d,k=%d",i,j,k);
}