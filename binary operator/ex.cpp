#include <iostream>
using namespace std;
class Complex
{
    int x,y;
    public: 
    Complex()
    {
        x=0;
        y=0;
    }
    Complex(int a,int b)
    {
       x=a;
       y=b;
    }
    void display()
    {
        cout<<"the real part:- "<<x<<endl;
        cout<<"the imaginary part:- "<<y<<endl;
        cout<<"sum is :- "<<x+y<<endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1=Complex(10,20);
    c2=Complex(5,10);
    cout<<"the first input:- "<<endl;
    c1.display();
    cout<<"the second input:- "<<endl;
    c2.display();
    cout<<"the output is:- "<< endl;
    c3=c1+c2;
    c3.display();
    return 0;
}