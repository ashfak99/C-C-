// #include<stdio.h>
// #define MAX 10
// int top=-1;
// int stack[MAX];
// void push(int item)
// {
//     if (top>=MAX-1)
//     {
//         printf("Stack is Full\n");
//         return;
//     }
//     else
//     {
//        stack[top++]=item;
//        printf("Item Pushed: %d\n",item);
//     }
    
// }
// void pop()
// {
//     if (top<0)
//     {
//         printf("Stack is Underflow\n");
//         return -1;
//     }
//     return stack[--top];
// }
// void display()
// {
//     printf("\nStack Element: ");
//     for (int i = top; i >= 0; i--)
//     {
//         printf("%d\t",stack[i]);
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     push(10);
//     push(9);
//     push(6);
//     push(5);
//     push(8);
//     push(7);
//     push(3);
//     push(4);
//     push(1);
//     display();
//     pop();
//     display();
//     return 0;
// }

// #include<stdio.h>
// #define MAX 10
// void find_degree(int graph[MAX][MAX],int vertices)
// {
//     int i,j;
//     int indegree[MAX]={0};
//     int outdegree[MAX]={0};
//     for ( i = 0; i < vertices; i++)
//     {
//         for ( j = 0; j < vertices; j++)
//         {
//             if (graph[i][j]==1)
//             {
//                 indegree[i]++;
//                 outdegree[i]++;
//             }
//         }
//     }
//     printf("Node\tIn_degree\tOut_degree\n");
//     for ( i = 0; i < vertices; i++)
//     {
//         printf("%d\t%d\t\t%d\n",i,indegree[i],outdegree[i]);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int i,j,vertices,graph[MAX][MAX];
//     printf("Please Enter The Vertices\n");
//     scanf("%d",&vertices);
//     printf("Enter The Adjmatrix of Graph\n");
//     for ( i = 0; i < vertices; i++)
//     {
//         for ( j = 0; j < vertices; j++)
//         {
//             scanf("%d",&graph[i][j]);
//         }
//     }
//     find_degree(graph,vertices);
//     return 0;
// }

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,num,arr[1000],n;
    printf("How Many Number IN Array: ");
    scanf("%d\n",&n);
    printf("Enter Element of Array %d numbers",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d\t",arr[i]);
    }
    printf("Enter Number To Search: ");
    scanf("%d\t",&num);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            break;
        }
    }
    if (num==arr[n])
    {
        printf("Number is not present \n");
    }
    else
     printf("Number is present at %d location",i);
    return 0;
}
