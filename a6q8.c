//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
void main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=2;i*i<n;++i)
    {
        if(n%i==0)
            cnt++;
    }
    if(cnt==0)
        printf("prime");
    else
        printf("not prime");
}
