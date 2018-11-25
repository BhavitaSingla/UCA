#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int *arr;
    int top;
};
void initialize(struct stack *mem, int size)
{
    mem -> arr = (int*)malloc(sizeof(int) * size);
    mem -> top = -1;
}
int push(struct stack *mem, int data, int size)
{
    if(mem -> top == size)
	return 0;
    mem ->arr[++mem-> top] = data;
    return 1;
}
int pop(struct stack *mem)
{
    if(mem -> top == -1)
	return 0;
    mem -> top--;
	return 1;
}
int isEmpty(struct stack *mem)
{
    if(mem -> top == -1)
    return 1;
    return 0;
}
int topElement(struct stack *mem)
{
   int x = mem -> arr[mem -> top];
   return x;
}
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    int stock[] = {2, 1, 5, 6, 2, 3};
    initialize(s, 6);
    int i, area, maxarea = 0;
    for(i = 0; i < 6; i++)
    {
        if((isEmpty(s) == 1) || (stock[i] > stock[topElement(s)]))
	{
	    push(s, i, 6);
	}
	else
        {
//	    int x = topElement(s);
	    pop(s);
	    if(isEmpty(s) == 1)
	    {
		 area = stock[topElement(s)] * i;
	    }
	    else
	    {
		area = stock[topElement(s)] * (i - topElement(s) - 1);
	    }
	    if(maxarea < area)
	    {
		maxarea = area;
	    }
	}
    }
    while(isEmpty(s) == 0) 
    {
        if(isEmpty(s) == 1)
	{
	    area = stock[topElement(s)] * i;
	        //    printf("area is %d %d\n", area, i); 
	}
       	else
       	{
	    area = stock[topElement(s)] * (i - topElement(s) - 1);
        }
	if(maxarea < area)
	{
	    maxarea = area;
	}
    }
    printf("%d\n", maxarea);
}
