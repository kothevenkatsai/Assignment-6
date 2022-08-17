//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
void main()
{
    int sum=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("%d",sum);
}
