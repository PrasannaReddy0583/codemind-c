#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j=0,k,r=0,m=0,l,h;
    scanf("%d",&a);
    l=a;
    while(a>0)
    {
		r=r*10+a%10;
        a=a/10;
        j++;
    }
    int arr[j];
	m=0;
    while(r>0)
    {
        b=r%10;
        arr[m]=b;
        r=r/10;
        m=m+1;
    }
    k=0,h=1;
    for(i=0;i<j;i++)
    {
        k=k+arr[i];
        h=h*arr[i];
    }
   if(k==h)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}