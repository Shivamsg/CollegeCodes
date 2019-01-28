#include<iostream>
using namespace std;

class privcons
{
    private:
            int x;
            privcons()
            {
                x = 21;
            }
    public:
            static privcons crt();
            void display();
};

privcons privcons :: crt()
{
    return privcons();
}

void privcons :: display()
{
    cout<<"Value of x : "<<x<<endl;
}
int main()
{
    privcons a = privcons :: crt();
    a.display();
    return 0;
}
