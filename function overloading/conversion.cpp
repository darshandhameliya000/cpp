#include<iostream>
using  namespace std;
void convert(int ruppes,double dollar)
{
    double total=ruppes*dollar;
    cout<<"ruppes to dollar:- "<<total<<endl;
};

void convert(int feet,int inches)
{
    int total=feet*inches;
    cout<<"feet to inches:- "<<total<<endl;
}

void convert(double centimeter,int inches)
{
    double  total=centimeter*inches;
    cout<<"inches to centimeter:- "<<total<<endl;
}

void convert(float celsius)
{
    double total=(celsius*9/5)+32;
    cout<<"celsius to fahrenhit:- "<<total<<endl;
}
int main()
{
    convert(50,83.50);
    convert(10,12);
    convert(10,2.54);
    convert(32);
    return 0;
}