#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    char bnmae[20];
    int innings,notout,runs;
    float batavg;
    float   calavg()
    {
        batavg =runs/(innings-notout);
        return batavg;
    }
    public:
    batsman();
    void readdata()
    {
        cout<<"----------------------------"<<endl;
        cout<<"bcode: "<<bcode<<endl;
        cout<<"bnmae: "<<bnmae<<endl;
        cout<<"innings: "<<innings<<endl;
        cout<<"notout: "<<notout<<endl;
        cout<<"runs: "<<runs<<endl;
     
        batavg=calavg();
        cout<<"batavg: "<<batavg<<endl;
    }
};
batsman::batsman()
{
     cout<<"enter the bcode:- ";
     cin>>bcode;
     cout<<"enter the bname:- ";
     cin>>bnmae;
     cout<<"enter the innings:- ";
     cin>>innings;
     cout<<"enter the notout:- ";
     cin>>notout;
     cout<<"enter the runs:- ";
     cin>>runs;

}
int main()
{
    batsman b;
    b.readdata();
    return 0;
}