#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[9];
    for ( i = 0; i < 9; i++)
    {
        printf("Please Enter The Number\n");
        scanf("%d",&a[i]);
    }
    printf("\n Our Numbers\n");
    for ( i = 0; i <9; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Our Numbers In Reverse Order\n");
    for ( i = 8; i >=0; i--)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}
