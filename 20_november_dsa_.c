// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[1000];
//     int i,j,temp,n;
//     printf("Bubble Sort\n");
//     printf("How many Number You Sort\n");
//     scanf("%d",&n);
//     printf("Enter %d Numbers : ",n);
//     for ( i = 0; i <n; i++)
//     {
//        scanf("%d",&arr[i]);
//     }
//     printf("\nArray Before Sorting:\n");
//     for ( i = 0; i <n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < n-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         } 
//     }
//     printf("\n\nArray after Sorting\n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[1000];
//     int i,j,n,temp;
//     printf("Selection Sort\n");
//     printf("How Many Numbers in Sorting: ");
//     scanf("%d",&n);
//     printf("\nEnter The %d Numbers: ",n);
//     for ( i = 0; i <n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\nArray Before Sorting :\n");
//     for ( i = 0; i < n; i++)
//     {
//          printf("%d\t",arr[i]);
//     }
//     for ( i = 0; i <n-1; i++)
//     {
//         for ( j = i+1; j < n; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("\nArray After Sorting:\n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
     
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[1000];
//     int i,j,k,temp,n;
//     printf("Insertion Sort\n");
//     printf("How many Numbers in Sorting: ");
//     scanf("%d",&n);
//     printf("Enter %d Numbers: ",n);
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\nArray Before Sorting: \n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     for ( i = 1; i <n; i++)
//     {
//         for ( j = 0; j < i; j++)
//         {
//             if (arr[j]>arr[i])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 for ( k = i; k>j; k--)
//                 {
//                    arr[k]=arr[k-1];
//                 }
//                 arr[k+1]=temp;
//             }
//         }
//     }
//     printf("\nArray After Sorting: \n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,arr[100],n,num;
//     printf("Unsorted Linear Search:\n");
//     printf("How many Number in Searching: ");
//     scanf("%d",&n);
//     printf("Enter %d Numbers: ",n);
//     for ( i = 0; i <n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter Number Whose you want to search: ");
//     scanf("%d",&num);
//     for ( i = 0; i < n; i++)
//     {
//         if (arr[n]<num||arr[i]>=num)
//         {
//             if(arr[i]==num)
//             {
//                 printf("The Number is at position %d in the array",i);
//             }
//             else
//              printf("Number is not present in array");
//              break;
//         }
        
//     }
//    // printf("%d Number is present at %d position",num,i);
//     return 0;
// }
#include<stdio.h>
#define max 10
void finddegree(int graph[MAX],int vertice)
int main()
{
    
}