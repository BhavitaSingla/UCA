#include<stdio.h>
int main()
{
int x,y;
 scanf("%d%d",&x,&y);
x=~((~x&~y)|(x&y));
printf("%d",x);
}
