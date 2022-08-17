//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
void main()
{
    int n1,n2,i;
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1*n2;i++)
    {
        if(i%n1==0 && i%n2==0)
            break;
    }
    printf("%d",i);
}
