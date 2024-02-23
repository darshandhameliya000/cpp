#include<iostream>
using namespace std;
class marksheet
{
    int id,marks;
    char name[20];
    public:
    void student()
    {
        cout<<"enter the student id:- ";
        cin>>id;
        cout<<"enter the student name:- ";
        cin>>name;
        cout<<"enter the student marks:- ";
        cin>>marks;
    }
    void display()
    {
        cout<<endl;
        cout<<"id is:- "<<id<<endl;
        cout<<"name is:- "<<name<<endl;
        cout<<"marks is:- "<<marks<<endl<<endl;
    }
};
int main()
{
    marksheet m[3];
    for(int i=0;i<3;i++)
    {
        m[i].student();
        m[i].display();
    }
    return 0;
}