#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int s;
    for(i=0;i<a;i++)
    {
        s=0;
        for(j=0;j<b;j++)
        {
            s+=ar[i][j];
        }
        printf("%d ",s);
    }
}