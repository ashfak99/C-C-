#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter element: ");
                scanf("%d",&a[i][j][k]);
            }
        } 
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        } 
        printf("\n");
    }
    
    return 0;
}
