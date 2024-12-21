#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count=0;
    if (head==NULL)
    {
        printf("Linked List is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("\n%d\n",count);
}

void print_data(struct node *head)
{
    if (head==NULL)
    {
        printf("Linked List is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    printf("\n");
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}

struct node* add_beg(struct node* head,int d)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;
    ptr->link=head;
    head=ptr;
    return head;
}

void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void add_begining(struct node **head,int d)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;
    ptr->link=*head;
    *head=ptr;
}

struct node* del_first(struct node *head)
{
    if (head==NULL)
    {
        printf("List is already empty!");
    }
    else
    {
        struct node *temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
}

struct node* del_last(struct node *head)
{
    if (head==NULL)
    {
        printf("List is already empty!");
    }
    else if (head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *temp=head;
        struct node *temp2=head;
        while(temp->link!=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
    return head;
}

void add_after(struct node *head,int loc,int d)
{
    struct node *temp,*temp2,*next;
    temp=head;
    for ( int i = 0; i <loc; i++)
    {
        next=temp->link;
        temp->link=temp2;
        temp2->data=d;
        temp2->link=next;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=5;
    current->link=NULL;
    head->link->link=current;

    current=malloc(sizeof(struct node));
    current->data=6;
    current->link=NULL;
    head->link->link->link=current;

    count_of_nodes(head);
    print_data(head);
    add_at_end(head,40);
    add_at_end(head,99);
    add_at_end(head,100);
    head=add_beg(head,102);
    head=add_beg(head,103);
    add_begining(&head,111);
    add_begining(&head,222);
    count_of_nodes(head);
    print_data(head);
    head=del_first(head);
    head=del_last(head);
   // add_after(head,4,1);
    count_of_nodes(head);
    print_data(head);
    return 0;
}
