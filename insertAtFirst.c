#include<stdio.h>
#include<stdlib.h>
struct Node 
{
int data;
struct Node *next;
};
struct Node *head=NULL;
void createNode(int data)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=head;
head=temp;
}
void insertAtFirst(int data)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=head;
head=temp;
}
void printList()
{
struct Node *nn=head;
while(nn!=NULL)
{
printf("%d\n",nn->data);
nn=nn->next;
}
}
int main()
{
int n,size,n1;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&n);
createNode(n);
}
scanf("%d",&n1);
insertAtFirst(n1);
printList();
}

