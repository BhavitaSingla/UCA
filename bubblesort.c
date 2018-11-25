#include<stdio.h>
#include<stdlib.h>
void printRandoms16000(int lower,int upper,int count,FILE *fp1)
{
    int num;
    int i,arr[16000];
    for(i=0;i<count;i++)
    {
//        arr[i]=(rand()%(upper-lower+1))+lower;
//        fprintf(fp1,"%d\n",arr[i]);
        fscanf(fp1,"%d",&num);
        arr[i]=num;
    }
    bubblesort(arr,16000);
}
void printRandoms32000(int lower,int upper,int count,FILE *fp2)
{
    int i,arr2[32000],num;
    for(i=0;i<count;i++)
    {
//        arr2[i]=(rand()%(upper-lower+1))+lower;
  //      fprintf(fp2,"%d\n",arr2[i]);
        fscanf(fp2,"%d",&num);
        arr2[i]=num;
    }
    bubblesort(arr2,32000);
}
void bubblesort(int *arr1,int size)
{
    clock_t start,end;
    start = clock();
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(arr1[j]>arr1[j+1])
	    {
	        int temp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]=temp;
	    }
        }
    }
    end=clock();
    printf("%lf",(double)end-start);
//    for(i=0;i<size;i++)
  //  {
    //    printf("%d\n",arr1[i]);
    //}
}
int main()
{
    
//    FILE *fp1=fopen("bubble16000.txt","w+");
  //  FILE *fp2=fopen("bubble32000.txt","w+");
    FILE *fp1=fopen("bubble16000.txt","r");
    FILE *fp2=fopen("bubble32000.txt","r");
    int n=16000,i,max=20000,num,l=1,up=35000,n1=32000;
    printRandoms16000(l,max,n,fp1);
    printRandoms32000(l,up,n1,fp2);


}
