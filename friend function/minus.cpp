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
        cout<<"data of a + b:- "<<x<<" + "<<y<<endl;
    }
    void displayyyy()
    { 
        cout<<"sum of a:- "
        <<x<<endl;
        cout<<"sum of b:- "<<y<<endl;
    }
};
complex sumnumber(complex o1,complex o2)
{
    complex o3;
    o3.setdata((o1.x+o2.x),(o1.y+o2.y));
    return o3;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(10,20);
    c1.display();

    c2.setdata(5,10);
    c2.display();
    
    c3=sumnumber(c1,c2);
    c3.displayyyy();

    return 0;
}