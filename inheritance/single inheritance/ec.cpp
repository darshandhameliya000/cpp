#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    int b;
    int total=0;
};
class derived : public base
{
    public:
    void totaldata()
    {
        a=10;
        total=a+b;
    }
};
int main()
{
    derived dd;
    dd.b=20;
    dd.totaldata();
    cout<<"total is:- "<<dd.totaldata();
    return 0;
}
