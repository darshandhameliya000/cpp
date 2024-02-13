#include<iostream>
using namespace std; 
class test
{
    int testcode;
    char description[20];
    int nocandiadte;
    int centerreqd;
    int  nocandidates;
    int calcntr()
    {
        centerreqd=nocandidates/100+1;
        return centerreqd;
    }

    public:
    test();
    void SCHEDULE()
    {
        cout<<"testcode:- "<<endl;
        cout<<"description:- "<<description<<endl;
        cout<<"nocandiadte: "<<nocandiadte<<endl;
        centerreqd=calcntr();
        cout<<"centerreqd:- "<<centerreqd<<endl;
    };

};
test::test()
{
    cout<<"enter the testcode:- ";
    cin>>testcode;
    cout<<"enter the description:- ";
    cin>>description;
    cout<<"enter the nocandiadte:- ";
    cin>>nocandiadte;
    cout<<"enter the centerreqd:- ";
    cin>>nocandidates;

}

int main()
{
    test t;
    t.SCHEDULE();
    return 0;
}