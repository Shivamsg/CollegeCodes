#include<iostream>
using namespace std;

//call by reference
class test2;
class test1
{
    int num;
    public:
    void getNum();
    void showob();
    friend void swap(test1&,test2&);
};

class test2
{
    int num;
    public:
    void getNum();
    void showob();
    friend void swap(test1&,test2&);
};

void test1::getNum()
{
    cout<<"Enter value of test1 object:";
    cin>>num;
}

void test1::showob()
{
    cout<<"test1 Object value:"<<num<<endl;
}

void test2::getNum()
{
    cout<<"Enter value of test2 object:";
    cin>>num;
}

void test2::showob()
{
    cout<<"test2 Object value:"<<num<<endl;
}

void swap(test1 &obj1,test2 &obj2)
{
    int temp;
    temp=obj1.num;
    obj1.num=obj2.num;
    obj2.num=temp;
}

int main()
{
    test1 obj1;
    test2 obj2;
    obj1.getNum();
    obj2.getNum();
    swap(obj1,obj2);
    obj1.showob();
    obj2.showob();
}