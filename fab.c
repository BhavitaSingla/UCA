 #include<stdio.h>
int fab(int n)
{
if(n==0)
{
return 0;
}
else if(n>=1&&n<=2)
{
return 1;
}
else
{
return(fab(n-1)+fab(n-2));
}
}
int main()
{
int num=0;
scanf("%d",&num);
for(int i=0;i<num;i++)
{
printf("%d",fab(i));
}
}
