#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int ch;
    printf("Choose any one \n 1. nth term of A.P\n 2. Number of terms in A.P\n 3. nth term from end \n 4. Sum of n Serien : ");
    scanf("%d",&ch);
         int arr[100],n,na,bn;
         float an , a,sn, d,d1;
         printf("Enter the number of element in array : ");
         scanf("%d",&n);
         printf("Enter the Element of array: ");
         for (int i = 0; i < n; i++)
         {
            scanf("%d",&arr[i]);
         }
         d=arr[1]-arr[0];
         d1=d;
         a=arr[0];
    switch (ch)
    {
    case 1:
         printf("\nWhich term you want to find : ");
         scanf("%d",&na);
         na=na-1;
         d=na*d;
         an=a+d;
         printf("\n%dth term of A.P= %f",na+1,an);
        break;
    case 2:
          printf("Enter the last term of A.P: ");
          scanf("%f",&an);
          an=an-a;
          na=d;
         d=d*(-1);
         an=an-d;
         an=an/na;
         printf("%f",an);
         break;
    case 3:
          printf("Enter the last term of A.P: ");
          scanf("%f",&an);
          an=an-a;
          na=d;
          d=d*(-1);
          an=an-d;
          an=an/na;
          printf("Which term you want to find from end: ");
          scanf("%d",&bn);
          an=an-bn+1;
          an=an-1;
          d1=an*d1;
          a=a+d1;
          printf("%dth term from end = %f",bn,a);
          break;
    case 4:
          printf("Enter the No of terms in  A.P: ");
          scanf("%d",&n);
          a=2*a;
          sn=n/2;
          n=n-1;
          d=d*n;
          a=a+d;
          sn=sn*a;
          printf("Sum of Series : %f",sn);
          break;
    default:
      printf("Wrong Choice!!!!!");
        break;
    }
  getch();
  return 0;
}