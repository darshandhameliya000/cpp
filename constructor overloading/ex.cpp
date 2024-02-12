#include<iostream>
using namespace std;
class deploy
{
    int a,b;

    public:
    deploy(int a1,int a2)
    {
        a=a1;
        b=a2;
    };
    deploy(int a1)
    {
        a=a1;
        b=0;
    }
    void printdata()
    {
        cout<<a<<" "<<b<<endl;
    };
};
int main()
{
    deploy d(10,20);
    d.printdata();
    deploy d1(10);
    d1.printdata();
    return 0;
}