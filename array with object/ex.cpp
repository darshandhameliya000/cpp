#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    void adddata()
    {
        cout<<"enter the x value:- ";
        cin>>x;
        cout<<"enter the y value:- ";
        cin>>y;
    }
    void display()
    {
        cout<<"the real part is:- "<<x<<endl;
        cout<<"the imaginary part is:- "<<y<<endl;
    }
};
int main()
{
    complex c1[3];
    for(int i=0;i<3;i++)
    {
        c1[i].adddata();
        c1[i].display();
    }
    return 0;
}