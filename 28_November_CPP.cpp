// #include<iostream>
// using namespace std;
// class complex
// {
// private:
//     float x,y;
// public:
//     complex(){}
//     complex(float a){x=y=a;}
//     complex(float r,float i)
//     {
//         x=r;
//         y=i;
//     }
//     friend complex sum(complex,complex);
//     friend void show(complex);
// };
// void show(complex c)
// {
//     cout<<c.x<<"+j"<<c.y<<"\n";
// }
// complex sum(complex c1,complex c2)
// {
//     complex c3;
//     c3.x=c1.x+c2.x;
//     c3.y=c1.y+c2.y;
//     return(c3);
// }
// int main(int argc, char const *argv[])
// {
//     complex A(2.7,3.5);
//     complex B(1.6);
//     complex C;
//     C=sum(A,B);

//     cout<<"A: ";show(A);
//     cout<<"\nB: ";show(B);
//     cout<<"\nC: ";show(C);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int volumn(int a);
// double volumn(double a, int b);
// long volumn(long a, int b, int c);
// int main(int argc, char const *argv[])
// {
//     int a,b,c;

//     cout<<volumn(10)<<endl;
//     cout<<volumn(4.2,4)<<endl;
//     cout<<volumn(2.3,4,5)<<endl;

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
// class operator_over
// {
// private:
//     int a,b,c;
// public:
//     void get_data();
//     void display();
//     void operator-();
// };
// void operator_over::get_data()
// {
//     cout<<"Enter Three Number: ";
//     cin>>a>>b>>c;
// }
// void operator_over::display()
// {
//     cout<<"A: "<<a<<"\tB: "<<b<<"\tC: "<<c<<endl;
// }
// void operator_over::operator-()
// {
//     a=-a;b=-b;c=-c;
// }
// int main(int argc, char const *argv[])
// {
//     operator_over o;
//     o.get_data();
//     o.display();
//     -o;
//     o.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class complex
{
private:
    float x,y;
public:
    complex(){}
    complex(float real, float imag)
    {
        x=real;y=imag;
    }
    complex operator+(complex);
    void display(void);
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return(temp);
}
void complex::display(void)
{
    cout<<x<<"+j"<<y<<"\n";
}
int main(int argc, char const *argv[])
{
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=c1+c2;
    cout<<"C: ";
    c1.display();
    cout<<"\nC2: ";
    c2.display();
    cout<<"\nCC3: ";
    c3.display();
    return 0;
}
