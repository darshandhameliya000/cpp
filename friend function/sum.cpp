#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    friend complex sumnumber(complex o1, complex o2);
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"data of a + b:- "<<x<<"+"<<y<<endl;
    }
};
complex sumnumber(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.x+o2.x),(o1.y+o2.y));
    return o3;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,3);
    c1.display();

    c2.setdata(3,5);
    c2.display();

    c3=sumnumber(c1,c2);
    c3.display();

    return 0;
}
