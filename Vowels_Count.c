#include<stdio.h>
int main()
{
  char str[100],ch;
  int s=0,i;
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!=NULL;i++)
  {
      ch=str[i];
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      {
          s++;
      }
  }
  printf("%d",s);
}