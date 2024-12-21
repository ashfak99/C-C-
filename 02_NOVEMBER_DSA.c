// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int arr[5]={25,17,31,13,2};
//     int i,j,temp;
//     printf("Bubble Sort\n");
//     printf("\nArray Before Sorting:\n");
//     for(i=0;i<=4;i++)
//        printf("%d\t",arr[i]);
//     for ( i = 0; i <=4; i++)
//     {
//         for ( j = 0; j < 4-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("\n\nArray After Sorting\n");
//     for(i=0;i<=4;i++)
//       printf("%d\t",arr[i]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int arr[5]={25,31,13,17,2};
//     int i,j,temp;
//     printf("Selection Sort\n");
//     printf("\nArray Before Sorting\n");
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     for ( i = 0; i <=4; i++)
//     {
//         for ( j = i+1; j <=4; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("\n\nArray After Sorting\n");
//     for ( i = 0; i <=4; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     getch();
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5]={25,17,13,31,2};
    int i,j,k,temp;
    printf("Insertion Sort\n");
    printf("\nArray Before Sorting\n");
    for ( i = 0; i <=4; i++)
    {
        printf("%d\t",arr[i]);
    }
    for ( i = 1; i <=4; i++)
    {
        for ( j = 0; j < i; j++)
        {
            if (arr[j]>arr[i])
            {
                temp=arr[i];
                arr[j]=arr[i];
                for ( k = i; k > j; k--)
                {
                    arr[k]=arr[k-1];
                }
                arr[k+1]=temp;
            }
        }
    }
    printf("\n\nAfter Sorting :\n");
    for ( i = 1; i <=4; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5]={25,17,31,12,2};
	int i,j,k,temp;
	printf("Insertion Sort\n");
	printf("\nArray before sorting:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				for(k=i;k>j;k++)
				  arr[k]=arr[k-1];
				arr[k+1]=temp;
			}
		}
	}
	printf("\n\nArray After sorting:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}