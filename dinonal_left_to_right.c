#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,a[3][3];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter The Element\n");
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Our Matrix is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nOutput in diagonal bottom left to top right\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           int row=0;
           int column=0;
           while (column>=j)
           {
            printf("%d",a[row++][column--]);
           }
           
        }
    }
    return 0;
}
