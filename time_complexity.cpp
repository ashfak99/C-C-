// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int sum=0;
//     for (int i = 2; i <=8; i++)
//     {
//         sum+=i;
//     }
//     cout<<"Sum: "<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     float x=2,y=8,d=1;
//     float n=y-x+1;
//     float result=(n/2)*(2*x+(n-1)*1);
//     cout<<"Result: "<<result;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    class node
    {
    public:
        int data;
        node* next;
        node()
        {
            data=0;
            next=NULL;
        }
        node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
    };
    return 0;
}
