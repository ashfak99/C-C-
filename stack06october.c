#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int item)
{
    if (top>=MAX-1)
    {
        printf("Stack is Overflow!\n");
        return;
    }
    stack[++top]=item;
    printf("Pushed %d: \n",item);
}
void pop()
{
    if (top<0)
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}
void display()
{
    if (top<0)
    {
        printf("Stack is EMPTY!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >=0; i--)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
   push(5);
   push(9);
   push(10);
   push(11);
   display();
   pop();
   display();
    return 0;
}
