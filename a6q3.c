//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i+=2)
        sum+=i;
        printf("%d ",sum);
}
