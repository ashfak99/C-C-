#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(int argc, char const *argv[])
{
    int x,y;
    cout<<"Enter X and Y: ";
    cin>>x>>y;
    cout<<"\nX and Y before swapping: "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"X and Y after Swap: "<<x<<" "<<y<<endl;
    return 0;
}
