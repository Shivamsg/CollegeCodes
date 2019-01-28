#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[50];
    ifstream ifs1, ifs2;
    ifs1.open("file1.txt");
    ifs2.open("file2.txt");
    
    while(ifs1.eof()==0 || ifs2.eof()==0)
    {
        if(ifs1.eof()==0)
        {
            ifs1.getline(str,50);
            cout<<str<<endl;
        }

        if(ifs2.eof()==0)
        {
            ifs2.getline(str,50);
            cout<<str<<endl;
        }
    }
    return 0;
}
