#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int *arr;
    int top;
};
void initialize(struct  stack *mem, int size)
{
    mem -> arr = (int*)malloc(sizeof(int) * size);
    mem -> top = -1;
}
void push(struct stack *mem, int data)
{
//    printf("data is %d", data);
    mem -> top++;
    mem -> arr[mem -> top] = data;
}
void pop(struct stack *mem)
{
    mem -> top--;
}
int isEmpty(struct stack *mem)
{
    if(mem -> top == -1)
    return 1;
    return 0;
}
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    int stock[] = {100, 80, 60, 70, 60, 55, 75, 85};
    initialize(s, 8);
    for(int i = 0; i < 8; i++)
    {
	if((isEmpty(s) == 1) || (stock[i] < stock[s -> top]))
        push(s, i);
	else
	{
            while(stock[i] > stock[s -> top])
	    {
       	        pop(s);
	    }
       	    int res = i - s -> top;
	    printf("%d %d\n", i, res);
 	    push(s, i);	
	}
    }
}
