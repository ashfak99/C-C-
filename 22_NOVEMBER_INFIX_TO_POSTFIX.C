#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#define MAX 50
struct infiz
{
    char target[MAX];
    char stack[MAX];
    char *s,*t;
    int top,l;
};
void intinfix(struct infix *);
void setexpr(struct infix *,char *);
void push(struct infix *,char);
char pop(struct infix *);
void convert(struct infix *);
int priority(char c);
void show(struct infix);
int main()
{
    struct infix *q;
    char expr[MAX];
    intinfix(q);
    printf("Enter an expression in infix form:\n");
    gets(expr);
    setexpr(q,expr);
    convert(q);
    printf("The prefix expression is: \n");
    show(q);
    return 0;
}
void intinfix(struct infix *pq)
{
    pq->top=-1;
    strcpy(pq->target,"");
    strcpy(pq->stack,"");
    pq->l=0;
}
