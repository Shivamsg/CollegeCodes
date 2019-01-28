#include<iostream>
using namespace std;

class complex{
    int real,img;

    public:
    complex()
    {

    }

    complex(int num)
    {
        real = num;
        img = num;
    }

    complex(int a,int b)
    {
        real = a;
        img = b;
    }

    friend complex add(complex&,complex&);

    friend void display(complex);
};

complex add(complex& obj1,complex& obj2)
{
    complex obj3;
    obj3.real=obj1.real+obj2.real;
    obj3.img=obj1.img+obj2.img;

    return obj3;
}

void display(complex obj)
{
    cout<<"Result is "<<obj.real<<" + i"<<obj.img<<endl;
}

int main()
{
    int p,q;
    complex obj,obj1,obj2;

    cout<<"\tAddition of two Complex Numbers"<<endl;
    
    cout<<"\nDetails of 1st Number"<<endl;
    cout<<"Real part:";
    cin>>p;
    cout<<"Imaginary part:";
    cin>>q;
    cout<<"Entered number is "<<p<<" + i"<<q<<"\n\n";

    if (p==q)
    {
        complex test(p);
        obj1=test;
    }
    else
    {
        complex test(p,q);
        obj1=test;
    }

    cout<<"Details of 2nd Number"<<endl;
    cout<<"Real part:";
    cin>>p;
    cout<<"Imaginary part:";
    cin>>q;
    cout<<"Entered number is "<<p<<" + i"<<q<<"\n\n";

    if (p==q)
    {
        complex test(p);
        obj2=test;
    }
    else
    {
        complex test(p,q);
        obj2=test;
    }

    obj=add(obj1,obj2);

    display(obj);

    return 0;
}

