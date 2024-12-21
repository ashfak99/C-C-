#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100];
    int n,j=0,temp;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i = 10; i < 100; i++)
    {
        if (i%n==0)
        {
            arr[j]=i;
            j++;
        }
    }
    for (int i = 0; i < 30; i++)
    {
        /* code */
        printf("%d\t",arr[i]);
    }
  //  printf("\n%f",arr[19]);
    return 0;
}
