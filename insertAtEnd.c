#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node* head;
void createNode(int data)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
struct Node* curr=(head);
if(curr==NULL)
{
temp->data=data;
temp->next=NULL;
head=temp;
}
else
{
temp->data=data;
temp->next=NULL;
while(curr->next!=NULL)
{
curr=curr->next;
}
curr->next=temp;
}
}
void insertAtEnd(int data)
{
	struct Node* temp=(head);
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	struct Node *x=(struct Node*)malloc(sizeof(struct Node));
	x->data=data;
	x->next=NULL;
	temp->next=x;
}
void printList()
{
struct Node* temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
int main()
{
	int n,data,n1;
	scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&data);
	createNode(data);
}
scanf("%d",&n1);
insertAtEnd(n1);
printList();
}
