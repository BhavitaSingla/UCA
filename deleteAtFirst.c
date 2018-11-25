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
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
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
void deleteAtFirst()
{
head=head->next;
}
void printList()
{
struct Node*curr=head;
while(curr!=NULL)
{
printf("%d\n",curr->data);
curr=curr->next;
}
}
int main()
{
int size,n1,n;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&n);
createNode(n);
}
deleteAtFirst();
printList();
}
