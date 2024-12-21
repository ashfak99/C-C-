#include<stdio.h>
int search(int a[],int n,int key)
{
    if (n==0)
    {
        /* code */
        return -1;
    }
    if (a[0]==key)
    {
        /* code */
        return 1;
    }
    else
      return search(a+1,n-1,key);
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
