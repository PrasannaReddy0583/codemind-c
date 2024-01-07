#include<stdio.h>
int main()
{
    int a,b,i,j;scanf("%d%d",&a,&b);int ar[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int s=0,l=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(ar[i][j]%2==0)
            {
                s+=ar[i][j];
            }
            if(ar[i][j]%2!=0)
            {
                l+=ar[i][j];
            }
        }
    }printf("%d %d",s,l);
}