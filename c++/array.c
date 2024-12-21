#include<stdio.h>
#include<conio.h>
#include<windows.h>

#define MAX 100

void insert (int *arr, int pos, int num)
{
    int i;
    for ( i = MAX; i >=1; i--)
    {
       arr[i]=arr[i-1];
    }
    arr[i]=num;
}

void del (int *arr, int pos)
{
    int i;
    for ( i = pos; i < MAX; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[i-1]=0;
}

void serach(int *arr, int num)
{
    int i;
    for ( i = 0; i < MAX; i++)
    {
        if (arr[i]==num)
        {
            printf("The element %d is present at %dth position \n\n",num,i+1);
            return;
        }
        
    }
    if (i==MAX)
    {
        printf("The element %d is not present in the array \n\n",num);
    }
    
}

void display(int *arr)
{
   int i;
   for ( i = 0; i < MAX; i++)
   {
         printf("%d\t",arr[i]);
   }
   printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[10];
    insert(arr,1,11);
    insert(arr,2,23);
    insert(arr,3,24);
    insert(arr,4,27);
    insert(arr,5,50);
    display(arr);


    return 0;
}
