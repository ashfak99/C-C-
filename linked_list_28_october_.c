#include<stdio.h>
#include<stdlib.h>
int d;
struct node{
    int data; 
    struct node *link;
};
void print(struct node *head)
{
    if (head==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}

struct node* del_first(struct node *head)
{
    if (head==NULL)
    {
        printf("List is Empty\n");
    }
    else{
        struct node *temp=head;
        head=head->link;
        d=temp->data;
        free(temp);
        temp==NULL;
    }
    return head;
}
void add_at_end(struct node *head)
{
    struct node *ptr, *temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
int main(int argc, char const *argv[])
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=2;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    current=malloc(sizeof(struct node));
    current->data=4;
    current->link=NULL;
    head->link->link->link=current;
    print(head);
    printf("\nAlam\n");
    head=del_first(head);
    print(head);
    printf("\n Global=%d\n",d);
    add_at_end(head);
    printf("\n");
    head=del_first(head);
    add_at_end(head);
    print(head);
    return 0;
}
