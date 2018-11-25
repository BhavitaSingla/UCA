#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* top = NULL;
void push(int num)
{
    struct Node* temp = (struct Node*)malloc(sizeof(int) * struct Node);
    temp -> data = num;
    temp -> next = top;
    top = temp;
    
}
void pop()
{
    struct Node* temp;
    int nodedata;
    if(top == NULL)
    return 1;
    temp = top;
    nodedata = top -> data;
    top = temp -> next;
    free(temp);
    printf("%d\n", nodedata);
}
int isEmpty()
{
    if(top == NULL)
    return 1;
    return 0;
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
   printf("%d\n", isEmpty());
}
