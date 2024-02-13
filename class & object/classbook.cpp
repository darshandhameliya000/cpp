#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char booktitle[20];
    float price;
    float tcost;
    float total_cost(int n)
    {
        tcost=n*price;
        return tcost;
    }

    public:
    void input()
    {
        cout<<"Enter the book number: ";
        cin>>bookno;
        cout<<"Enter the book title: ";
        cin>>booktitle;
        cout<<"Enter the book price: ";
        cin>>price;
    }

    void display()
    {
        int n;
        cout<<"enter the number of books:- ";
        cin>>n;
        total_cost(n);
        cout<<"the cost of:- "<<tcost<<endl;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}