#include<iostream>
#include<fstream>
using namespace std;

void read()
{
    string a, b;
    ifstream ifs1, ifs2;
    ifs1.open("f1.txt");
    ifs2.open("f2.txt");
    while(1)
    {
        if(ifs1)
        {
            getline(ifs1, a);
            cout<<a<<"\n";
        }
        if(ifs2)
        {
            getline(ifs2, b);
            cout<<b<<"\n";
        }
        if(!ifs1 && !ifs2)
            break;
    }
}

int main()
{
    read();
    return 0;
}