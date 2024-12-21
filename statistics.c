#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int arr[100],arr2[100],arr3[100];
    int n,sum=0,sum3=0;
    float am;
    printf("Enter the Number of Element in array: ");
    scanf("%d",&n);
    printf("\nEnter the first input (x): ");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the second input (f): ");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr2[i]);
        sum+=arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[i]=arr[i]*arr2[i];
        sum3+=arr3[i];
    }
    printf("\nThird array : \n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t",arr3[i]);
    }
    am=sum3/sum;
    printf("\n*****OUTPUT*****\n");
    printf("x\t\tf\t\txf\n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t\t%d\t\t%d\n",arr[i],arr2[i],arr3[i]);
    }
    printf(" \t\t%d\t\t%d",sum,sum3);
    printf("\n Arithmetic Mean : %f",am);
    return 0;
}
