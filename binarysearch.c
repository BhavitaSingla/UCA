#include<stdio.h>
#include<stdlib.h>
int binarySearch(int *arr, int lr, int up, int num)
{
    int mid;
    mid = (up-lr)/2;
    if(arr[mid] == num)
    {
        return mid;
    }
    else if(arr[mid]<num)
    {
        return(binarySearch(arr, mid+1, up, num));
    }
    else
    {
        return(binarySearch(arr, lr, mid, num));
    }
}
int main()
{
    int i,num,low=0,up=5;
    int arr[6]={1,2,3,4,5,6};
    scanf("%d",&num);
    int x = binarySearch(arr, low, up, num);
    printf("%d\n",x);
}
