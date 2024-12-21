#include<stdio.h>
#define MAX 10
void finddegree(int graph[MAX][MAX],int vertices)
{
    int indegree[MAX]={0};
    int outdegree[MAX]={0};
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
             if (graph[i][j]==1)
             {
                outdegree[i]++;
                indegree[i]++;
             }
             
        }  
    }
    printf("Node\tIn-Degree\tOut-Degree\n");
    for (int i = 0; i < vertices; i++)
    {
        printf("%d\t%d\t\t%d\n",i,indegree[i],outdegree[i]);
    }
}
int main(int argc, char const *argv[])
{
    int vertices;
    printf("Please Enter The Number of Vertices\n");
    scanf("%d",&vertices);
    int graph[MAX][MAX];
    printf("Enter the Adjmatrix:\n");
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    finddegree(graph,vertices);
    return 0;
}
// #include<stdio.h>
// #define MAX 10
// int main(int argc, char const *argv[])
// {
//     int adjmatrix[MAX][MAX],numNodes,numEdges;
//     printf("Please Enter The Number Of Nodes: ");
//     scanf("%d\n",&numNodes);
//     printf("Please Enter The Number of Edges: ");
//     scanf("%d\n",&numEdges);
//     for (int i = 0; i <numNodes; i++)
//     {
//         for (int j = 0; j < numNodes; j++)
//         {
//             adjmatrix[i][j]=0;
//         } 
//     }
//     for (int i = 0; i <numEdges; i++)
//     {
//         int node1,node2;
//         printf("Enter Edge %d(node1,node2):",i+1);
//         scanf("%d%d",&node1,&node2);
//         adjmatrix[node1][node2]=1;
//         adjmatrix[node2][node1]=1;
//         int isundirected=1;
//         for (int i = 0; i <numNodes; i++)
//         {
//           for (int j=j+1; i <numNodes; j++)
//           {
//             if (adjmatrix[i][j]!=adjmatrix[j][i])
//             {
//                 isundirected=0;
//                 break;
//             }
//           }
//           if (!isundirected)
//           {
//             break;
//           }
//         }
//         if (isundirected)
//         {
//             printf("The graph is undirected\n");
//         }
//         else
//             printf("The graph is directed\n");
//     }
//     return 0;
// }
