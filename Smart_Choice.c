#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    i = (500 - (a*2) + 1000 - ((a+b)*4));
    j = (500 - (b*4) + 1000 - ((a+b)*2));
    if(i<=j)
    {
        printf("%d",j);
    }
    else
    {
        printf("%d",i);
    }
}