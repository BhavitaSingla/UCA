#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node * head;
void createNode(int data)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
struct Node *curr=head;

temp->data=data;
temp->next=NULL;
if(curr==NULL)
{
head=temp;
}
else
{
while(curr->next !=NULL)
{
curr=curr->next;
}
curr->next=temp;
}
}
void deleteAtPos(int pos)
{
struct Node *curr=head;
for(int i=1;i<pos-1;i++)
{
curr=curr->next;
}
curr->next=curr->next->next;
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
int size,n,pos;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&n);
createNode(n);
}
scanf("%d",&pos);
deleteAtPos(pos);
printList();
}
