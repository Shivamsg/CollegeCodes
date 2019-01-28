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
        cout<<"name "<<depoName<<endl;
        cout<<"A/c No "<<accNo<<endl;
        cout<<"A/c Type "<<accType<<endl;
        cout<<"Balance "<<balAmt<<endl;
	}
};

int main()
{
    int opt;

    cout<<"Enter how many records do you want to create:- ";
    cin>>opt;
    cout<<endl;

    BankAccount obj[opt];

    for(int i=0;i<opt;i++)
    {
        obj[i].assignValue();
        cout<<endl;
    }

    cout<<"  \"DETAILS\"\n";

    for(int i=0;i<opt;i++)
    {
        obj[i].display();
        cout<<endl;
    }
}