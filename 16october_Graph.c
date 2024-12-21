#include<stdio.h>
#define n 5
int main(int argc, char const *argv[])
{
    int i,j,a[n][n];
    int indegree[n],outdegree[n];
    indegree[n]=outdegree[n]=0;
    for ( i = 0; i <n; i++)
    {
        for ( j = 0;j < n; j++)
        {
            printf("Please Enter The Element\n");
            scanf("%d\n",&a[i][j]);
        }
        
    }
     printf("Our Matrix is\n");
     for ( i = 0; i <n; i++)
     {
        for ( j = 0; j <n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
     }
     for ( i = 0; i < n; i++)
     {
        for ( j = 0; j < n; j++)
        {
         indegree[i]+=a[i][j];
         outdegree[i]+=a[i][j];
        }
     }
     for ( i = 0; i < n; i++)
     {
        printf("Indegree=%d\nOutDegree=%d\n",indegree[i],outdegree[i]);
     }
     
    return 0;
}
