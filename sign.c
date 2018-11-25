#include<stdio.h>
int sign(int n)
{
int x;
x=n>>31;
printf("%d\n",x);
int y=!(!n);
printf("%d\n",y);
return x|y;
}
int main()
{
int num,x;
scanf("%d",&num);
x=sign(num);
printf("%d",x);
}
