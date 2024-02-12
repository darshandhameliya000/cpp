#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float  eng,math,science;
    float total;
    float ctotal()
    {
        total=eng+math+science;
        return total;
    }

    public:
     student();
     void takedata()
     {
        cout<<"---------------------"<<endl;
        cout<<"student admin no :- "<<admno<<endl;
        cout<<"student name:- "<<sname<<endl;
        cout<<"student english marks:- "<<eng<<endl;
        cout<<"student math marks:- "<<math<<endl;
        cout<<"student science:- "<<science<<endl;
        total=ctotal();
        cout<<"total:- "<<total<<endl;
     }
};
student::student()
{
         cout<<"enter admno: ";
         cin>>admno;
         cout<<"enter sname: ";
         cin>>sname;
         cout<<"enter eng: ";
         cin>>eng;
         cout<<"enter math: ";
         cin>>math;
         cout<<"enter science: ";
         cin>>science;
         
}
int main()
{
    student s1;
    s1.takedata();

    return 0;
}