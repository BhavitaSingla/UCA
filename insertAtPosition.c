#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *head;
void createNode(int data)
{
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
struct Node *curr=head;
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
void insertAtPos(int data,int pos)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
struct Node *curr=head;
for(int i=1;i<pos-1;i++)
{
curr=curr->next;
}
if(curr==NULL)
{
createNode(data);
}
else
{
temp->data=data;
temp->next=curr->next;
curr->next=temp;
}
}
void printList()
{
struct Node*temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
int main()
{
int size,n,n1,pos;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&n);
createNode(n);
}
scanf("%d%d",&n1,&pos);
insertAtPos(n1,pos);
 printList();
}

