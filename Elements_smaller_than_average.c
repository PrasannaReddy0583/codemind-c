#include<stdio.h>
int main()
{
    int a,i,s=0;scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        s=s+ar[i];
    }int m=0;
    for(i=0;i<a;i++)
    {
        if(ar[i]<=(s/a))
        {
            m++;
        }
    }printf("%d",m);
}