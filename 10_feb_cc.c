#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, arr[10];
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the element: ");
        scanf("%d\n",&arr[i]);
    }
    for ( i = 10; i > 0; i--)
    {
        printf("%d\t",arr[i]);
    }
    
    
    return 0;
}
