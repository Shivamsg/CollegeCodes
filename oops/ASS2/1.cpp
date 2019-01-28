#include<iostream>
using namespace std;

class student
{
    public:
    int Rollno;
    string Name;
    int age;

    void create()
    {
        cout<<"Enter Rollno :- ";
        cin>>Rollno;
        cout<<"Enter Name :- ";
        cin.ignore(12, '\n');
        getline(cin,Name);
        cout<<"Enter age :- ";
        cin>>age;
        cout<<endl;
    }

    void display()
	{
        
        cout<<"Rollno "<<Rollno<<endl;
        cout<<"Name "<<Name<<endl;
        cout<<"Age "<<age<<endl;
        cout<<endl;
	}

};

int main()
{
    int opt,k=0;
	student obj[20];

    cout<<"Choice List\n";
    cout<<"1)  Enter Student details\n";
    cout<<"2)  Show entire Student Details\n";
    cout<<"3)  EXIT\n";

    do{
        cout<<"\tEnter your choice:- ";
        cin>>opt;
        cout<<"\n";

        switch(opt)
        {
            case 1:
                obj[k].create();
                k++;
                break;
            case 2:
                cout<<"  \"DETAILS\"\n";
                for(int i=0;i<k;i++)
                    obj[i].display();
                break;
            case 3:
                cout<<"\tExit from programme control\n";
        }

        
    }while(opt!=3);
}
