#include<iostream>
using namespace std;

int curbal;

class bank
{
    public:
    int pin=0;
    void getpin()
    {
        cout<<"\nenetr your pin:- ";
        cin>>pin;

        if(pin==1111)
        {
            curbal=50000;
            cout<<"\nAccount holder name:- DHAMELIYA"<<endl;
            cout<<"Account number:- 78654201036"<<endl;
            cout<<"IFSC code:- SBIN00852"<<endl;
            cout<<"current balance:- "<<curbal<<endl;
        }
        else if(pin==2222)
        {
            curbal=30000;
            cout<<"Account holder name:- MALANI"<<endl;
            cout<<"Account number:- 98502426582"<<endl;
            cout<<"IFSC code:- VRNB506602"<<endl;
            cout<<"current balance:- "<<curbal<<endl;
        }
        else if(pin==3333)
        {
            curbal=20000;
            cout<<"Account holder name:- SOJITRA "<<endl;
            cout<<"Account number:- 56242357840"<<endl;
            cout<<"IFSC code:- RBIN5024067"<<endl;
            cout<<"current balance:- "<<curbal<<endl;
        }
        else
        {
            cout<<"your pin is incorrect";
        }
    }
    void printoption()
    {
        cout<<"\nSelect the No. to view The Details-------------->"<<endl;
        cout<<"\n1. Withdrawal "<<endl;
        cout<<"2. Deposite "<<endl;
        cout<<"3. Current Balnce "<<endl;
        cout<<"4. Loan & EMI "<<endl;
        cout<<"0. Exit:- \n"<<endl;
    }
};
int main()
{
    bank b;
    b.getpin();

    int choice, withdrawal=0,deposite=0,loan,year;
    float interest,amount;


    do
    {
        b.printoption();
        cout<<"\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter the amount you want withdrawal:- ";
            cin>>withdrawal;

            curbal-=withdrawal;
            cout<<"Balance after withdrawal amount:- "<<curbal<<endl;
            break;

            case 2:
            cout<<"enter the amount you want deposit:- ";
            cin>>deposite;

            curbal+=deposite;
            cout<<"Balance after deposit amount:- "<<curbal<<endl;
            break;

            case 3:
            cout<<"current balance:- "<<curbal<<endl;
            break;

            case 4:
            cout<<"enter the loan amount:- ";
            cin>>loan;
            cout<<"enter the rate of interest:- ";
            cin>>interest;
            cout<<"enter the year:- ";
            cin>>year;

            amount=loan*(interest/100)*year;
            cout<<"Final amount:- "<<amount<<endl;
            break;

            case 0:
            cout<<"Thank you for visit again !!!"<<endl;
            break;
        }
    }while(choice!=0);
    return 0;
}