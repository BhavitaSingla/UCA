#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct queue
{
    int front;
    int rear;
    Node *arr;
};
struct Node* Tree(int data)
{
    struct Node* nn = (struct Node*)malloc(sizeof(struct Node));
    nn->data = data;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}
void initialize(struct queue * q)
{
    q->front = -1;
    q->rear = 0;
    arr = (node*)malloc(sizeof(node) * 7);
}
int isEmpty(struct queue* q)
{
    if(q->front == q->rear ||q->front == -1)
        return 1;
    return 0;  
}
int isFull(struct queue* q)
{
    if(q->rear == 7)
        return 1;
    return 0;
}
int enqueue(struct queue* q, int value)
{
    if(isEmpty(q))
    {
        q->front = q->front + 1;
        //q->rear = q->rear + 1;
    }
    if(isFull)
        return 0;
    q->arr[q->rear] = value;
    q->rear = q->rear+1;
}
int dequeue(struct queue* q)
{
    if(isEmpty(q))
	return 0;
    printf("%d\t", q->arr[q->front]);
    q->front = q->front + 1;
}
void levelOrder(struct Node* root)
{
    struct queue q;
    enqueue(q, root->data);
    while(root)
    {
//        enqueue(q, root->data);
        
	if(root->left)
        enqueue(q, root->left->data);
	if(root->right)
        enqueue(q, root->right->data);
        dequeue(q);
        root->data = q->arr[q->front];
    }
}
int main()
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* root = Tree(1);
    root->left = Tree(2);
    root->right = Tree(3);
    root->left->left = Tree(4);
    root->left->right = Tree(5);
    root->right->left = Tree(6);
    root->right->right = Tree(7);
    levelOrder(que, root);
}
