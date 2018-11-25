#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node*next;
};
struct node*head;
void push(int data)
{
	struct node*temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
int pop()
{
	struct node*temp=head;
	head=head->next;
	int data=temp->data;
	free(temp);
	return data;
}
int peek()
{
	return head->data;
}
int main()
{
	head=NULL;
	push(5);
	pop(5);
	printf("%d",peek());
}
