#include<string.h>
#include<iostream>
using namespace std;

class BankAccount
{
	public:
    string depoName;
    string accType;
    int accNo;
    int withdrawAmt;
    int depositAmt;
    int balAmt;

    void assignValue()
    {
        cout<<"Enter Name :- ";
        cin.ignore(12, '\n');
        getline(cin,depoName);
        cout<<"Enter A/c no :- ";
        cin>>accNo;
        cout<<"Enter A/c Type :- ";
        cin>>accType;
        cout<<"Enter Opening Balance :- ";
        cin>>balAmt;
    }

    void deposit()
    {
        cout<<"Enter Deposit Amount :- ";
        cin>>depositAmt;
        balAmt+=depositAmt;
        cout<<"Deposit Balance = "<<balAmt<<endl;
    }

    void withdraw()
    {
        cout<<"Balance Amount = "<<balAmt<<endl;
        cout<<"Enter Withdraw Amount :- ";
        cin>>withdrawAmt;
        balAmt-=withdrawAmt;
        cout<<"After Withdraw Balance is "<<balAmt<<endl;
    }

	void display()
	{
        cout<<"  \"DETAILS\"\n";
        cout<<"name "<<depoName<<endl;
        cout<<"A/c No "<<accNo<<endl;
        cout<<"A/c Type "<<accType<<endl;
        cout<<"Balance "<<balAmt<<endl;
	}
};

int main()
{
    int opt;
	BankAccount obj;

    cout<<"Choice List\n";
    cout<<"1)  To assign Initial Value\n";
    cout<<"2)  To Deposit\n";
    cout<<"3)  To Withdraw\n";
    cout<<"4)  To Display All Details\n";
    cout<<"5)  EXIT\n";

    do{
        cout<<"\tEnter your choice:- ";
        cin>>opt;
        cout<<"\n";

        switch(opt)
        {
            case 1:
                obj.assignValue();
                break;
            case 2:
                obj.deposit();
                break;
            case 3:
                obj.withdraw();
                break;
            case 4:
                obj.display();
                break;
            case 5:
                cout<<"\tExit from programme control\n";
        }

        
    }while(opt!=5);
}