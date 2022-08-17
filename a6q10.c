//10. Write a program to reverse a given number
#include<stdio.h>
void main()
{
    int n,ans=0;
    scanf("%d",&n);
    while(n>0)
    {
        int a=n%10;
        ans=ans*10+a;
        n=n/10;
    }
    printf("%d",ans);
}
