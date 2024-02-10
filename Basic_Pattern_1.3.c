#include<stdio.h>
int main()
{
    int a,i,k,b=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    for(k=1;k<=a;k++)
        {
            printf("%d ",b);
        }
    b++;    
    printf("
");
    }
}