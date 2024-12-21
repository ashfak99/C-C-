// #include<iostream>
// using namespace std;
// const int m=50;
// class ITEMS
// {
// private:
//     int itemCode[m];
//     float itemPrice[m];
//     int count;
// public:
//     void CNT(void){count=0;}
//     void getitem(void);
//     void displaysum(void);
//     void remove(void);
//     void displayItems(void);
// };

// void ITEMS::getitem(void)
// {
//     cout<<"Enter item Code: ";
//     cin>>itemCode[count];
//     cout<<"\nEnter item cost: ";
//     cin>>itemPrice[count];
//     count++;
// }

// void ITEMS::displaysum(void)
// {
//     float sum=0;
//     for (int i = 0; i < count; i++)
//     {
//         sum=sum+itemPrice[i];
//     }
//     cout<<"\nTotal value :"<<sum<<"\n";
// }

// void ITEMS::remove(void)
// {
//     int a;
//     cout<<"Enter item code: ";
//     cin>>a;
//     for (int i = 0; i < count; i++)
//     {
//         if (itemCode[i]==a)
//         {
//             itemPrice[i]=0;
//         }
//     }
// }

// void ITEMS::displayItems(void)
// {
//     cout<<"\nCode\tPrice\n";
//     for (int i = 0; i < count; i++)
//     {
//         cout<<"\n"<<itemCode[i];
//         cout<<"\t"<<itemPrice[i];
//     }
//     cout<<"\n";
// }

// int main(int argc, char const *argv[])
// {
//     ITEMS order;
//     order.CNT();
//     int x;
//     do
//     {
//         cout<<"\n\n*****START*****";
//         cout<<"\nYou can do the following: "<<"Enter appropriate numbe\n";
//         cout<<"\n1: Add an items";
//         cout<<"\n2: Display total value";
//         cout<<"\n3: Delete an items";
//         cout<<"\n4: Display all items";
//         cout<<"\n5: Quit";
//         cout<<"\n\nWhat is your Option?: ";
//         cin>>x;
//         switch (x)
//         {
//         case 1:
//            order.getitem();
//             break;
//         case 2:
//            order.displaysum();
//            break;
//         case 3: 
//            order.remove();
//            break;
//         case 4:
//            order.displayItems();
//            break;
//         case 5:
//            break;
//         default:
//            cout<<"!!!!!Wrong Input!!!!!!";
//             break;
//         }
//     } while (x!=5);
    
//     return 0;
// }

#include<iostream>
using namespace std;
class fixed_deposite
{
private:
    long int p_amount;
    int years;
    float rate;
    float R_value;
public:
    fixed_deposite(){ }
    fixed_deposite(long int p, int y, float r=0.12);
    fixed_deposite(long int p, int y, int r);
    void display(void);
};

fixed_deposite::fixed_deposite(long int p, int y, float r)
{
    p_amount=p;
    years=y;
    rate=r;
    R_value=p_amount;
    for (int i = 1; i <=y; i++)
    {
        R_value=R_value*(1.0+r);
    }
}
fixed_deposite::fixed_deposite(long int p, int y, int r)
{
    p_amount=p;
    years=y;
    rate=r;
    R_value=p_amount;
    for (int  i = 1; i <=y; i++)
    {
        R_value=R_value*(1.0+float(r)/100);
    }
}
void fixed_deposite::display(void)
{
    cout<<"\n"<<"Principal Amount= "<<p_amount<<"\n"<<"Return Value ="<<R_value<<endl;
}
int main(int argc, char const *argv[])
{
    fixed_deposite FD1,FD2,FD3;
    long int p;
    int y;
    float r;
    int R;
    cout<<"Enter amount, period, interest rate(in percent)"<<"\n";
    cin>>p>>y>>R;
    FD1=fixed_deposite(p,y,R);

    cout<<"Enter amount,period,interest rate(decimal form)"<<endl;
    cin>>p>>y>>r;
    FD2=fixed_deposite(p,y,r);

    cout<<"Enter amount and period"<<endl;
    cin>>p>>y;
    FD3=fixed_deposite(p,y);

    cout<<"\nDeposite 1: ";
    FD1.display();

    cout<<"\nDeposite 2: ";
    FD2.display(); 

    cout<<"\nDeposite 3: ";
    FD3.display();
    return 0;
}