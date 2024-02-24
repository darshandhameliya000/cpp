#include<iostream>
using namespace std;
class base
{
    int salary;
    public:
    int bouns;
    void salarydata(int salary1)
    {
        salary=salary1;
    }
    void totalsalary(int bonus)
    {
        total=salary+bonus;
    }
};
class derived : public base
{
    public:
    void bonusdata(int bouns1)
    {
        bouns=bouns1;
    }
}