// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("Number \t Square\n");
//     printf("----------------\n");
//     for (int i = 1; i <= 10; i++)
//     {
//         /* code */
//         printf("%d\t %d\n",i,i*i);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     //int a=5,b=2,c;
//     //c= a $ b
//     printf("%d",2 '$' 3);
//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("Number \t Square\n");
//     printf("----------------\n");
//     for (int i = 1; i <= 10; i++)
//     {
//         /* code */
//         printf("%d\t %d\n",i,i*i);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     //int a=5,b=2,c;
//     //c= a $ b
//     printf("%d",2 '$' 3);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// #include<ctype.h>

// #define MAXCOLS 80
// #define TRUE 1
// #define FALSE 0

// struct stack
// {
//     int top;
//     double items[MAXCOLS];
// };
// double eval(char[]);
// //double po(struct stack *);
// void push(struct stack *, double);
// //int empty(struct stack *);
// //int isdigit(char);
// double oper(int,double,double);


// int sdigit(char symb)
// {
//     return (symb >= '0' && symb <= '9');
// }


// int mpty(struct stack *p)
// {
//     if (p->top==-1)
//     {
//         return(TRUE);
//     }
//     else
//     return(FALSE);
// }


// double po(struct stack *ps)
// {
//     if (mpty(ps))
//     {
//         printf("%d","Stack underflow");
//         exit(1);
//     }
//     return(ps->items[ps->top--]);
    
// }

// void main()
// {
//     char expr[MAXCOLS];
//     int position=0;

//     while((expr[position++]=getchar())!='\n');
//     expr[--position]='\0';
//     printf("%s%s","the original postfix expression is expr");
//     printf("\n%f",eval(expr));
// }


// void push(struct stack *ps, double x)
// {
//     ps->items[++(ps->top)]=x;
//     return;
// }

// double oper(int symb, double op1, double op2)
// {
//     switch (symb)
//     {
//     case '+': return (op1+op2);
//     case '-': return (op1-op2);
//     case '*': return (op1*op2);
//     case '/': return (op1/op2);
//     case '$': return(pow(op1,op2));
    
//     default: printf("%s","illegal operation");
//      exit(1);
//     }
// }
// double eval(char expr[]){
//     int c,position;
//     double opnd1,opnd2,value;
//     struct stack opndstk;

//     opndstk.top=1;
//     for(position=0;(c=expr[position])!='\0'; position++)
//       if(sdigit(c))
//       push(&opndstk,(double)(c-'\0'));
//       else
//       {
//         opnd2=po(&opndstk);
//         opnd1=po(&opndstk);
//         value=oper(c,opnd1,opnd2);
//       }
//     return (po(&opndstk));
// }

/*/
#include<stdio.h>
#include<windows.h>

#define MAX 10
struct stack 
{
    int arr[MAX];
    int top;
};

void initstack(struct stack *s)
{
    s->top=-1;
}

int push(struct stack *s, int item[MAX])
{
    if (s->top==MAX-1)
    {
        printf("Stack is full.\n");
        return;
    }
   s->top++;
   s->arr[s->top]=item[s->top]; 
}

int pop(struct stack *s)
{
    int data;
    if(s->top==-1)
    {
        printf("Stack is empty.\n");
        return NULL;
    }
    data=s->arr[s->top];
    s->top--;
    return data;
}

int main(int argc, char const *argv[])
{
    struct stack s;
    int i,j,k,a[10];
    int n=2;    system("cls");
    initstack(&s);
    printf("Please Enter the 10 item you want to pushed\n");
    for ( k = 0; k < MAX; k++)
    {
            scanf("%d",&a[k]);
    }
    for ( n = 0; n<MAX; n++)
    {
        push(&s,a);
    }
    for (int l = 0; l <5; l++)
    {
         i=pop (&s);
         if(i!=NULL)
        printf("item popped=%d\n",i);
    }
    
    i=pop (&s);
    if(i!=NULL)
      printf("item popped=%d\n",i);
    return 0;
}*/

#include<stdio.h>
#include<windows.h>

#define MAX 10

void addq(int *arr, int item, int *pfront, int *prear)
{
    if (*prear==MAX-1)
    {
        printf("Queue is full\n");
        return;
    }
    (*prear)++;
    arr[*prear]=item;
    if(*pfront==-1)
     *pfront=0;
}

int delq(int *arr,int *pfront,int *prear)
{
    int data;
    if(*pfront==-1)
    {
        printf("Queue is Empty\n");
        return NULL;
    }
    data=arr[*pfront];
    arr[*pfront]=0;
    if(*pfront==*prear)
      *pfront=*prear=-1;
    else
     (*pfront)++;
    return data;
}

int main(int argc, char const *argv[])
{
    int arr[MAX];
    int front=-1, rear=-1,i;
    int l[MAX];
    system("cls");
    printf("Please Enter %d Item\n",MAX);
   // scanf("%c",&l);
    for (int j = 0; j < MAX; j++)
    {
        scanf("%d",&l[j]);
        addq(arr,l,&front,&rear);
    }
    
  /*/  addq(arr,l,&front,&rear);
    addq(arr,'A',&front,&rear);
    addq(arr,'s',&front,&rear);
    addq(arr,'h',&front,&rear);
    addq(arr,'f',&front,&rear);
    addq(arr,'a',&front,&rear);
    addq(arr,'k',&front,&rear);*/
    for (int b = 0; b < 6; b++)
    {
        i=delq(arr,&front,&rear);
        if (i!=NULL)
        {
            printf("%d\n",i);
        }
        
    }
    
  /*/  i=delq(arr,&front,&rear);
    if(i!=NULL)
     printf("%d",i);
    
     i=delq(arr,&front,&rear);
    if(i!=NULL)
     printf("%d",i);
    
     i=delq(arr,&front,&rear);
    if(i!=NULL)
     printf("%d",i);
    
     i=delq(arr,&front,&rear);
    if(i!=NULL)
     printf("%d",i);
    
     i=delq(arr,&front,&rear);
    if(i!=NULL)
     printf("%d",i);
    
     i=delq(arr,&front,&rear);
    if(i!=NULL)
     printf("%d",i);*/
    
    return 0;
}

/*
#include<stdio.h>
#include<malloc.h>
#include<windows.h>

struct node
{
    int data;
    struct node *link;
};

void push(struct node **top, int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));

    if(temp==NULL)
     printf("Stack is full\n");
    
    temp->data=item;
    temp->link=*top;
    *top=temp;
}

int pop(struct node **top)
{
    struct node *temp;
    int item;
    if (*top==NULL)
    {
        printf("Stack is empty\n");
        return NULL;
       
    }
     temp=*top;
        item=temp->data;
        *top=(*top)->link;

        free(temp);
        return item;
}

void delstack(struct node **top)
{
    struct node *temp;
    if(*top==NULL)
      return;
    while (*top!=NULL)
    {
        temp=*top;
        *top=(*top)->link;
        free(temp);
    }
}

int main(int argc, char const *argv[])
{
    struct node *s=NULL;
    int i;
    system("cls");
    
    push(&s,'k');
    push(&s,'a');
    push(&s,"f");
    push(&s,'h');
    push(&s,'s');
    push(&s,'A');

    i=pop(&s);
    if(i!=NULL)
     printf("%c",i);

     i=pop(&s);
    if(i!=NULL)
     printf("%c",i);

    i=pop(&s);
    if(i!=NULL)
     printf("%c",i);

    i=pop(&s);
    if(i!=NULL)
     printf("%c",i);

    i=pop(&s);
    if(i!=NULL)
     printf("%c",i);

    i=pop(&s);
    if(i!=NULL)
     printf("%c",i);

    return 0;
}*/
