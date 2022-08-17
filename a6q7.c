//7. Write a program to count digits in a given number
void main()
{
    int n,cnt=0;
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("%d",cnt);
}
