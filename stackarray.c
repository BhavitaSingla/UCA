#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int *arr;
    int top ;
};
void initialize(struct stack *mem, int size)
{
    mem -> arr = (int*)malloc(sizeof(int)*size);
    mem->top = -1;
//    int num;
  //  scanf("%d",&num);
   // mem->top += 1;
   // mem->arr[mem->top] = num;
   // printf("%d",mem->arr[mem->top]);
}
int isEmpty(struct stack *mem)
{
    if(mem->top == -1)
    return 1;
    return 0;
}
int isFull(struct stack *mem, int size)
{
    if(mem->top == size)
    return 1;
    else 
    return 0;
}
void push(struct stack *mem, int data)
{
    mem -> top++;
    mem -> arr[mem -> top] = data;
}
void pop(struct stack *mem)
{
    mem -> top--;
}

int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    int i, num;
    initialize(s, 5);
    for( i = 0; i < 5; i++)
    {
        scanf("%d",&num);
        push(s, num);
    }
    pop(s);
   printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s, 5));
}
