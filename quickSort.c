#include<stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int solve(int *arr, int start, int end)
{
    int i = start, j = start, pivot = arr[end];
    for(j = start; j <= end;)
    {
        if(arr[j] <= pivot)
        {
            if(i != j)
            swap(&arr[i], &arr[j]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return(i - 1);
}
void quickSort(int* a, int start, int end)
{
    if(start <= end)
    {
        int index = solve(a, start, end);
        quickSort(a, index + 1, end);
        quickSort(a, start, index - 1);
    }
}
void print(int *arr)
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[5]={7, 2, 6, 3, 5};
    quickSort(arr, 0, 4);
    print(arr);
}
