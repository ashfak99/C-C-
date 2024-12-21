// #include<stdio.h>
// #define MAX 10
// int rear=-1;
// int front=-1;
// int queue[MAX];
// void enqueue(int item)
// {
//     if(rear==MAX-1)
//     {
//         printf("Queue is Full\n");
//         return;
//     }
//     queue[rear++]=item;
//     printf("Item Enqueued: %d\n",item);
//     if(front==-1)
//       front=0;
// }
// void dequeue()
// {
//     int data;
//     if(front<0)
//     {
//         printf("Queue is Empty\n");
//         return NULL;
//     }
//     data=queue[front];
//     queue[front]=0;
//     if(front==rear)
//        front=rear=-1;
//     else
//       front++;
//     return data;
// }
// int main()
// {
//     enqueue(5);
//     enqueue(20);
//     dequeue();
// }

