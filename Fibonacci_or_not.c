#include<stdio.h>
int main()
{
    int a,i,c,j;
    scanf("%d",&a);
    int f1,f2,f3;
    f1=0,f2=1;
    for(i=0;i<=a;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        if(f3==a||a==0||a==1)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
