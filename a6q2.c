//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
void main()
{
    int sum=0,n;
    scanf("%d",&n);
    for(int i=2;i<=2*n;i+=2)
        sum+=i;
    printf("%d",sum);
}
