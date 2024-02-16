#include<iostream>
using  namespace std;
void sum(int a,int b)
{
    cout<<a+b;
};
void sum(double a, double b)
{
    cout<<a+b;
};
int main()
{
    sum(10,20);
    sum(10.0,30.0);
    return 0;
}