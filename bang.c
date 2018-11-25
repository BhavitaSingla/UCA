#include<stdio.h>
int bang(int num)
{int temp=((~num+1)|num)>>31;
  return ~temp&1;
}
int main()
{
int num;
scanf("%d",&num);
//bang(num);
printf("%d",bang(num));
}
