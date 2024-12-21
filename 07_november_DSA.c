// #include<stdio.h>
// int main()
// {
//     int arr[10]={11,2,9,13,57,25,17,1,90,3};
//     int i,num;
//     printf("Enter number to search: ");
//     scanf("%d",&num);
//     for ( i = 0; i <= 9; i++)
//     {
//           if (arr[i]==num)
//           {
//             break;
//           }
//     }
//     if (i==10)
//     {
//         printf("Number is not present in the array\n");
//     }
//     else
//         printf("The number is at position %d in the array",i);
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10]={1,2,3,9,11,13,17,25,57,90};
//     int i,num;
//     printf("Enter number to search: ");
//     scanf("%d",&num);
//     for ( i = 0; i <= 9; i++)
//     {
//         if(arr[9]<num||arr[i]>=num)
//         {
//             if (arr[i]==num)
//             {
//                 printf("The number is at position %d in the array",i);
//             }
//             else
//             {
//                 printf("Number is not present in array");
//             }
//             break;
//         }

//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,9,11,13,17,25,57,90};
    int mid,lower=0,upper=9,num,flag=1;
    printf("Enter the number to search\n");
    scanf("%d",&num);
    for ( mid=(lower+upper)/2;lower<=upper;mid=(lower+upper)/2)
    {
        if (arr[mid]==num)
        {
            printf("The element is at position %d in the array",mid);
            flag=0;
            break;
        }
        if(arr[mid>num])
               upper=mid-1;
        else
               lower=mid+1;
    }
    if (flag)
    {
        printf("Element is not present in the array\n");
    }
    return 0;
}