#include<stdio.h>
#define MAX 100
int front=0;
int rear=0;
int queue[MAX];
void enqueue(int item)
{
    if (rear==MAX)
    {
        printf("Queue is OVERFLOW!\n");
        return;
    }
    //rear++;
    queue[++rear]=item;
    printf("ENQUEUED : %d\n",item);
}
void dequeue()
{
    int data;
  if (front<0)
  {
    printf("Queue is Empty\n");
    return ;
  }
  data=queue[front];
  queue[front]=0;
  if (front==rear)
    front=rear-1;
  else 
    front++;
   //return data;
}
void display()
{
    if (rear<0)
    {
        printf("Queue is underflow\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = 1; i <= rear; i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    enqueue(5);
    enqueue(10);
    enqueue(11);
    enqueue(12);
    display();
    dequeue();
    display();
    return 0;
}
