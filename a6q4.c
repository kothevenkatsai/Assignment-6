//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        sum+=(i*i);
    printf("%d",sum);
}
