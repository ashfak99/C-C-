// #include<iostream>
// using namespace std;
// void swap(int & x, int & y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"\nEnter B: ";
//     cin>>b;
//     swap(a,b);
//     cout<<"A: "<<a<<"\n"<<"B: "<<b<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int i=5;
//     i=600*600/600;
//     cout<<i;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num,sum;
//     sum=0;
//     cout<<"Enter a positive integer: ";
//     cin>>num;
//     for (int i = 0; i <= num; i++)
//     {
//         sum+=i;
//     }
//     cout<<"Sum="<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// class bank{
// 	string name;
// 	int ac_no;
// 	string ac_type;
// 	float balance;
// 	public:
// 		void data(void);
// 		float deposite(float);
// 		float withdraw(float);
// 		void display();
// };
// void bank::data(void)
// {
//     cout<<"Enter Name: ";
// 	cin>>name;
//     cout<<"\nEnter ac_no: ";
// 	cin>>ac_no;
//     cout<<"\nEnter Ac_type: ";
// 	cin>>ac_type;
//     cout<<"Enter Balance: ";
// 	cin>>balance;
// }
// float bank::deposite(float a)
// {
// 	cout<<"How many amount you want to deposite\n";
// 	cin>>a;
// 	balance+=a;
// 	return balance;
// }
// float bank::withdraw(float b)
// {
// 	cout<<"How many amount you want to withdraw\n";
// 	cin>>b;
// 	balance-=b;
// 	return balance;
// }
// void bank::display()
// {
// 	cout<<"Name: "<<name<<endl;
// 	cout<<"Acount Number: "<<ac_no<<endl;
// 	cout<<"Acount Type: "<<ac_type<<endl;
// 	cout<<"Balance: "<<balance<<"\n";
// }
// int main()
// {
//     cout<<"Ashfak"<<endl;
// 	float b,x;
// 	bank b1;
//     cout<<"Ashfak"<<endl;
// 	b1.data();
// 	b1.display();
// 	b1.deposite(b);
// 	b1.display();
// 	b1.withdraw(x);
// 	b1.display();
// 	return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// class bank
// {
// private:
//     int ac_no;
//     char ac_type[30];
//     float balance;
// public:
//     char name[30];
//     void getdata();
//     void deposite();
//     void display();
// };

// void bank::getdata()
// {
//     cout<<"\nEnter Name: ";
//     cin>>name;
//     cout<<"\nEnter Ac_no: ";
//     cin>>ac_no;
//     cout<<"\nEnter Ac_type: ";
//     cin>>ac_type;
//     cout<<"\nEnter Balance: ";
//     cin>>balance;
// }
// void bank::deposite()
// {
//     float d;
//     cout<<"Enter Amount: ";
//     cin>>d;
//     balance=balance+d;
// }
// void bank::display()
// {
//     cout<<"Name: "<<name<<endl;
//     cout<<"Ac_No: "<<ac_no<<endl;
//     cout<<"Balance: "<<balance<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     bank b1;
//     b1.getdata();
//     b1.display();
//     b1.deposite();
//     b1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// inline int mul(int x, int y)
// {
//     return(x*y);
// }
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cout<<"Enter A and B: ";
//     cin>>a>>b;
//     cout<<"Mul: "<<mul(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class alam
// {
// private:
//     int a,b,c;
// public:
//     void getdata();
//     void display();
//     void operator-();
// };
// void alam::getdata()
// {
//     cout<<"Enter Three Numbers: ";
//     cin>>a>>b>>c;
// }
// void alam::display()
// {
//     cout<<"A: "<<a<<"\tB: "<<b<<"\tC: "<<c<<endl;
// }
// void alam::operator-()
// {
//     a=-a;b=-b;c=-c;
// }
// int main(int argc, char const *argv[])
// {
//     alam a;
//     a.getdata();
//     a.display();
//     -a;
//     a.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class integer
// {
// private:
//     int m,n;
// public:
//     integer(int x, int y);
//     void display();
// };

// integer::integer(int x, int y)
// {
//     m=x;n=y;
// }

// void integer::display()
// {
//     cout<<"M: "<<m;
//     cout<<"\nN: "<<n;
// }
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cout<<"Enter Two Number: ";
//     cin>>a>>b;
//     cout<<endl;
//     integer int1=integer(a,b);
//     int1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int volumn(int a);
// double volumn(double a, int b);
// long volumn(long a, int b, int c);
// int main(int argc, char const *argv[])
// {
//     int x,y,z;
//     cout<<"Enter Three Numbers: ";
//     cin>>x>>y>>z;
//     cout<<volumn(x)<<endl;
//     cout<<volumn(x,y)<<endl;
//     cout<<volumn(x,y,z)<<endl;
    
//     return 0;
// }
// int volumn(int a)
// {
//     return(a*a*a);
// }
// double volumn(double a, int b)
// {
//     return(3.14*a*b);
// }
// long volumn(long a, int b, int c)
// {
//     return(a*b*c);
// }

// #include<iostream>
// using namespace std;
// class operatover
// {
// private:
//     int a,b,c;
// public:
//     void getdata();
//     void display();
//     void operator-();
// };
// void operatover::getdata()
// {
//     cout<<"Enter Three Numbers: ";
//     cin>>a>>b>>c;
// }
// void operatover::display()
// {
//     cout<<"A: "<<a<<"\tB: "<<b<<"\tC: "<<c<<endl;
// }
// void operatover::operator-()
// {
//     a=-a;b=-b;c=-c;
// }
// int main(int argc, char const *argv[])
// {
//     operatover o;
//     o.getdata();
//     o.display();
//     -o;
//     o.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class operator_over
// {
// private:
//     int a;
// public:
//     void getdata();
//     void display();
//     void operator++();
// };
// void operator_over::getdata()
// {
//     cout<<"Enter Number: ";
//     cin>>a;
// }
// void operator_over::display()
// {
//     cout<<"A: "<<a<<endl;
// }
// void operator_over::operator++()
// {
//     a=a+5;
// }
// int main(int argc, char const *argv[])
// {
//     operator_over o;
//     o.getdata();
//     o.display();
//     o.operator++();
//     o.display();
//     ++o;
//     o.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class base
// {
// public:
//     virtual void print()
//     {
//         cout<<"Print Base class\n";
//     }
//     void show()
//     {
//         cout<<"Base Show\n";
//     }
// };

// class derived:public base
// {
// public:
//     void print()
//     {
//         cout<<"Print Derived Class\n";
//     }
//     void show()
//     {
//         cout<<"Derived Show\n";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     base *bptr;
//     base b;
//     derived d;
//     bptr=&d;
//     bptr->print();
//     bptr->show();
//     d.print();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class alam
// {
// private:
//     int a,b;
// public:
//     alam(){}
//     alam(int a);
//     alam(int a, int b);
// };

// alam::alam(int a)
// {
//     a=a*a;
//     cout<<"Area of Square: "<<a<<endl;
// }
// alam::alam(int a, int b)
// {
//     a=a*b;
//     cout<<"Area of rectangle: "<<a<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     alam a1,a2,a3;
//     int a,b;
//     cout<<"Enter Two Numbers: ";
//     cin>>a>>b;
//     a1=alam(a);
//     a2=alam(a,b);
//     cout<<"\nEnter A: ";
//     cin>>a;
//     a3=alam(a);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class code
// {
// private:
//     int id;
// public:
//     code(){}
//     code(int a){id=a;}
//     code(code & x)
//     {
//         id=x.id;
//     }
//     void display(void)
//     {
//         cout<<id;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     code A(100);
//     code B(A);
//     code C=A;
//     code D;
//     D=A;
//     cout<<"\n id of A: ";A.display();
//     cout<<"\n id of B: ";B.display();
//     cout<<"\n id of C: ";C.display();
//     cout<<"\n id of D: ";D.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class base
// {
// private:
//     int a;
// public:
//     int b;
//     void get_ab();
//     int get_a();
//     void show_a();
// };
// class derived : public base
// {
// private:
//     int c;
// public:
//     void mul(void);
//     void display();
// };
// void base::get_ab()
// {
//     a=5;b=10;
// }
// int base::get_a()
// {
//     return(a);
// }
// void base::show_a()
// {
//     cout<<"A: "<<a<<endl;
// }
// void derived::mul()
// {
//     c=get_a()*b;
// }
// void derived::display()
// {
//     cout<<"A: "<<get_a()<<endl;
//     cout<<"B: "<<b<<endl;
//     cout<<"C: "<<c<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     derived d;
//     d.get_ab();
//     d.get_a();
//     d.show_a();
//     d.mul();
//     d.display();
//     d.b=30;
//     d.mul();
//     d.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class student
{
protected:
    int roll_number;
public:
    void get_number();
    void put_number(void);
};
void student::get_number()
{
    cout<<"Enter Roll_No: ";
    cin>>roll_number;
}
void student::put_number()
{
    cout<<"Roll Number: "<<roll_number<<endl;
}
class test : public student
{
protected:
    float sub1,sub2;
public:
    void get_marks();
    void put_marks();
};
void test::get_marks()
{
    cout<<"Enter Marks of Two Subject: ";
    cin>>sub1>>sub2;
}
void test::put_marks()
{
    cout<<"Marks in Sub1: "<<sub1<<endl;
    cout<<"Marks in Sub2: "<<sub2<<endl;
}
class result : public test
{
    float total;
public:
    void display(void);
};
void result::display()
{
    total=sub1+sub2;
    cout<<"*****OUTPUT*****"<<endl;
    put_number();
    put_marks();
    cout<<"\nTotal= "<<total<<endl;
}
int main(int argc, char const *argv[])
{
    result r;
    r.get_number();
    r.get_marks();
    r.display(); 
    return 0;
}
