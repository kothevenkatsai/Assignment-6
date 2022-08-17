//6. Write a program to calculate factorial of a number
void main()
{
    int n,ans=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
        ans=ans*i;
    printf("%d",ans);
}
