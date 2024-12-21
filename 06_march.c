#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char alam[100];
    int n,i,ch,j=1;
    printf("Enter Your Name: ");
    //scanf("%s",&alam);
    gets(alam);
    printf("Enter Key: ");
    scanf("%d", &n);
    while(1)
{
    printf("1.Incripting\n2.Decripting\n3.Exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
         for ( i = 0; i <strlen(alam); i++)
          {
             alam[i]=alam[i]+n;
         }
         printf("\n Name : %s\n\n",alam);
        break;
    case 2:
        for ( i = 0; i < strlen(alam); i++)
         {
             alam[i]=alam[i]-n;
         }
          printf("\n Name : %s\n\n",alam);
          break;
    case 3:
         break;
    default:
        printf("Wrong Choice");
        break;
    }
 }   //  printf("Program Done");
    return 0;
}
