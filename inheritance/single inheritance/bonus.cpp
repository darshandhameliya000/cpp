#include<iostream>
using namespace std;
class base
{
    int salary;
    public:
    int bonus,total;
    void salarydata(int salary1)
    {
        salary=salary1;
    }
    void totalsalary()
    {
        total=salary+bonus;
    }
};
class derived : public base
{
    public:
    void bonusdata(int bouns1)
    {
        bonus=bouns1;
    }
};
int main()
{
    derived dd;
    dd.salarydata(1000);
    dd.bonusdata(100);
    dd.totalsalary();
    cout<<dd.total;
    return 0;
}