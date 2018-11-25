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
while(curr->next!=NULL)
{
curr=curr->next;
}
temp->data=data;
temp->next=NULL;
curr->next=temp;
}
}
void deleteAtLast()
{
struct Node *curr=head;
while(curr->next->next!=NULL)
{
curr=curr->next;
}
curr->next=NULL;
//printf("curr is%d\n",curr->data);
}
void printList()
{
struct Node *curr=head;
while(curr!=NULL)
{
printf("%d\n",curr->data);
curr=curr->next;
}
}
int main()
{
int size,n;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&n);
createNode(n);
}
deleteAtLast();
printList();
}
