#include<stdio.h>
int invert(int n,int pos,int x)
{
return n^(~(-1<<x)<<pos);
}
int main()
{
int num,p,x,n;
scanf("%d%d%d",&num,&p,&x);
n=invert(num,p,x);
printf("%d",n);
}
