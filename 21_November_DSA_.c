#include<stdio.h>
#define MAX 10
int top=-1;
int stack[MAX];
void push(int item)
{
    if(top>=MAX-1)
    {
        printf("Stack is full\n");
        return;
    }
    stack[top=top+1]=item;
    printf("Pushed %d:\n",item);
}
void pop()
{
    int d;
    if(top<0)
    {
        printf("Stack is Underflow!!!!\n");
        return -1;
    }
    d=stack[top];
    stack[top=top-1];
    printf("\nItem Popped: %d",d);
}
void print()
{
    if(top<0)
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("\nStack Elements: ");
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
void status()
{
    float free;
    if(top<0)
    {
        printf("Stack is full\n");
        return -1;
    }
    else if(top>=MAX-1)
    {
        printf("Stack is Full\n");
        return;
    }
    printf("\nElement at top is %d",stack[top]);
    free=(MAX-1-top)/(MAX-1)*100;
    printf("\nPercentage of free stack is %f%",free);
}
int main()
{
    printf("Stack*****\n");
    push(5);
    push(10);
    push(20);
    push(1);
    push(50);
    print();
    status();
    pop();
    print();
    status();
    return 0;
}