#include<stdio.h>
int main()
{
    int a,i,k=0;
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        i=a%10;
        if(k<i)
        {
            k=i;
        }
    }
    printf("%d",k);
}