#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,a=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        a++;
    }
    printf("%d",a);
}