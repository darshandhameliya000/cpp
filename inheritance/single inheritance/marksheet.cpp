#include<iostream>
using namespace std;
class base
{
    public:
    int id,eng[3],hindi[3],state[3],total[3];
    char name[20];
    int marks;
    float per[3];
    void getdata()
    {
        for(int i=0;i<3;i++)
        {
            cout<<"enter the id:- ";
            cin>>id;
            cout<<"enter the name:- ";
            cin>>name;
            cout<<"enter the eng marks:- ";
            cin>>eng[i];
            cout<<"enter the hindi marks:- ";
            cin>>hindi[i];
            cout<<"enter the state marks:- ";
            cin>>state[i];
        } 
    }
};
class derived : public base
{
    public:
    void totaldata()
    {
        for(int i=0;i<3;i++)
        {
            total[i]=eng[i]+hindi[i]+state[i];
            per[i]=total[i]/3;
            cout<<"-------------------------"<<endl;
            cout<<"total marks:- "<<total[i]<<endl;
            cout<<"percentage:- "<<per[i]<<endl;
        }
    }
};
int main()
{
    derived dd;
    dd.getdata();
    dd.totaldata();
    
    return 0;
}
