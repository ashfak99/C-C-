#include<stdio.h>
#include<stdlib.h>
int d;
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
    if (head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }    
}
int main(int argc, char const *argv[])
{
    int n,a;
    printf("Enter the number of element in series : ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the Element of Sequence: ");
    scanf("%d",&a);
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a;
    head->link=NULL;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        scanf("%d",&a);
        push(&head,a);
    }
    
    print(head);
    return 0;
}
