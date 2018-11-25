#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int *arr;
    int top;
};
int min(int a, int b)
{
    if(a < b)
        return a;
    else
	return b;
}
void initialize(struct stack *mem, int size)
{
    mem ->arr = (int*)malloc(sizeof(int) * size);
    mem ->top = -1;
}
int push(struct stack *mem, int data, int size)
{
    mem -> top++;
    if(mem -> top == size)
        return 0;
    mem -> arr[mem -> top] = data;
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
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int i, x, dis, height, ans;
    initialize(s, 12);
    for(i = 0; i < 12; i++)
    {
            while(isEmpty(s) == 0 && arr[i] > arr[topElement(s)])
	    {
		x = topElement(s);
		pop(s);
		if(isEmpty(s) == 1)
		    break;
	        dis = i - topElement(s) - 1;
		height = min(arr[i], arr[topElement(s)]) - arr[x];
		ans += dis * height; 
            }
        
	push(s, i, 12);
    }
	printf("%d\n", ans);
}
