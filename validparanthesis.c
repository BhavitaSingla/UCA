#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack
{
    int top;
    char *arr;
};
struct stack st;
void initialize(int size)
{
   st.top = -1;
   st.arr = (char*)malloc(sizeof(char) * size);
}
void push(char ch)
{
    st.top++;
    st.arr[st.top] = ch;
}
int pop(char data)
{
    if(st.arr[st.top] == data)
    {
        st.top--;
        if(st.top == -1)
        return 0;
    }
    return st.top;
}
void isFull()
{

}
void isEmpty()
{

}
int main()
{
   // struct stack st;
    char str[] = "{[()]}{}([]){}";
    int len = strlen(str);
    initialize(len/2);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == '{', '[', '(')
        {
            push(str[i]);
        }
        else if(str[i] == '}', ']', ')')
        {
            int x = pop(str[i]);
            if(x == 0)
            break;
        }
    }
}
