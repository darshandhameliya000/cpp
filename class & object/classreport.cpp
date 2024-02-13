#include<iostream>
using namespace std;
class report
{
    private:
    int admno;
    char name[50];
    float marks[5];
    float avarage=0;
    void getavg()
    {
        for(int i=0;i<5;i++)
        {
            avarage=avarage+marks[i];
        }
        avarage=avarage*100/500;
    }

    public:
    void readinfo()
    {
        cout<<"enter admission  number:- ";
        cin>>admno;
        cout<<"enter name:- ";
        cin>>name;
        for(int i=0;i<5;i++)
        {
            cout<<"enter the marks of subjects"<<i+1<<endl;
            cin>>marks[i];
        }
        getavg();
    }

    void displayinfo()
    {
        cout<<"admission number:- "<<admno<<endl;
        cout<<"name:- "<<name<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"marks of subjects"<<i+1<<" is:- "<<marks[i]<<endl;
        }
        cout<<"avarage is:- "<<avarage<<endl;
    }
};
int main()
{
    report obj;
    obj.readinfo();
    obj.displayinfo();
    return 0;
}
