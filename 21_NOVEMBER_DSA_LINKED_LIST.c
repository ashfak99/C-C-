#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void push(struct node **head,int d)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;
    ptr->link=*head;
    *head=ptr;
}
void print(struct node *head)
{
    if(head==NULL)
      printf("Linked List is Empty\n");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    push(&head,12);
    push(&head,90);
    print(head);

}