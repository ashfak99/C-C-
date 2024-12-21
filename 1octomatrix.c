#include<stdio.h>
#define n 4
int main(int argc, char const *argv[])
{
    int i,j,a[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Please Enter The Matrix\n");
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nOur Matrix\n");
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
          //  scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[0][1]==a[1][0])
           {
            printf("Undirect Matrix\t");
           }
           else
              printf("direct matrix\t");
           break;
        }
        break;
    }
    
    return 0;
}
