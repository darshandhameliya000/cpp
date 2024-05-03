#include<iostream>
using namespace std;
class hotel
{
    public:
    void hotelmenu()
    {
        int choice;
        cout<<"\nwhat you want to order-------->"<<endl;
        cout<<"1. soup"<<endl;
        cout<<"2. statered"<<endl;
        cout<<"3. dessert"<<endl;
        cout<<"4. drinks"<<endl;

        cout<<"\nenter the order number:- ";
        cin>>choice;
        cout<<endl;
    }

};
int main()
{
    hotel h;
    int choice;

    do
    {
        h.hotelmenu();
        cout<<"\nenter the order number:- ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                h.hotelmenu();
                break;
            case 2:
                h.hotelmenu();
                break;
            case 3:
                h.hotelmenu();
                break;
            case 4:
                h.hotelmenu();
                break;
            default:
                cout<<"invalid choice";
                break;
    }

    } while (choice);
    
    

    return 0;
}
