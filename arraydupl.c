#include<stdio.h>
int main()
{
int arr[7]={3,4,1,2,3,2,4},x;
for(int i=0;i<7;)
{
int x=arr[i];
for(int j=i+1;j<7;j++)
{
if(x^arr[j]==0)
{
arr[i]=0;
arr[j]=0;
}
}
i++;
}
for(int i=0;i<7;i++)
{
if(arr[i]!=0)
{
printf("%d",arr[i]);
}
}
}
