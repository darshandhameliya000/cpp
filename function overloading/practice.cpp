#include<iostream>
using  namespace std;
void area(double pi,int r)
{
    double area=pi*r*r;
    cout<<"area of circle is:- "<<area<<endl;
};

void area(int a)
{
    int area=a*a;
    cout<<"area of square:- "<<area<<endl;
}

void area(int len,int width)
{
    int area=len*width;
    cout<<"area of rectangle:- "<<area<<endl;
}

void area(double height,double base)
{
    int area=height*base/2;
    cout<<"area of triangle:- "<<area<<endl;
}
int main()
{
    area(3.14,50);
    area(10);
    area(10,20);
    area(20.0,10.0);
    return 0;
}