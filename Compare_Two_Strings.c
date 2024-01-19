#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],st[20];
    int i,a=0,s,d;
    scanf("%s%s",str,st);
    s=strlen(str);
    d=strlen(st);
   
   if(s==d)
   {
    for(i=0;i<s;i++)
    {
        if(str[i]==st[i])
        {
            a++;
        }
    }
    if(a==s)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
    }
    else
    {
        printf("Strings are not Equal");
    }
}    