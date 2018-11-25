<F8>4e#include<stdio.h>
void merge(int a[], int aux[], int start, int mid, int end)
{
    int i = start, j = mid+1, k = 0;
    for(k = start; k <= end; k++)
    {    
         if(i > mid)
        {
            aux[k] = a[j++];
        }
        else if(j > end)
        {
            aux[k]=a[i++];
        }
        else if(a[i] > a[j])
        {
            aux[k]=a[j++];
        }
        else
        {
            aux[k]=a[i++];
        }
    }
    for(int m = start; m <= end; m++)
    {
        a[m] = aux[m];
    } 

}
void mergeSort(int a[], int aux[], int start, int end)
{
    int mid;
    if(end <= start)
    return;

    mid = (start + end)/2;
    mergeSort(a, aux, start, mid);
    mergeSort(a, aux, mid+1, end);
    merge(a, aux, start, mid, end);
}
int main()
{
    int arr[4] = {7, 5, 3, 8};
    int aux[4]={0};
    mergeSort(arr, aux, 0, 3);
    for(int i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
    }
}
