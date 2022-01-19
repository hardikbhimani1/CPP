#include<iostream>
using namespace std;
class petrol_pump 
{
    int a,b,c;
    public:
        void info();
        void petrol();
        void diesel();
};
void petrol_pump::info()
{
    cout<<"\n Rameswar LPG pump";
    cout<<"\n MO N:1234567890";
    cout<<"\nAdd:Una road Gir Gadhada\n";
}
void petrol_pump::petrol()
{
    int ptr=103;
    cout<<"petrol price is 103 per litter\n";
    cout<<"6how many litter you want";
    cin>>a;
    b=ptr*a;

    cout<<"\t\t---------------------------------------\n";
    cout<<"\t\t\t\tYour Bill  \n";
    cout<<"\t\t---------------------------------------\n";
    cout<<"\n\t\tpetrol price\tlitter\t\tfinal bill";
    cout<<"\n\t\t"<<ptr<<"\t\t"<<a<<"\t\t"<<b;
    cout<<"\n\t\t---------------------------------------\n";
}
void petrol_pump::diesel()
{
    int die=99;
    cout<<"\tdiesel price 99 is  per litter\n";
    cout<<"\thow many litter you want";
    cin>>a;
    b=die*a;

    cout<<"\t\t---------------------------------------\n";
    cout<<"\t\t\t\tyour bill is : \n";
    cout<<"\t\t---------------------------------------\n";
    cout<<"\n\t\tdiesel price\tlitter\t\tfinal bill";
    cout<<"\n\t\t"<<die<<"\t\t"<<a<<"\t\t"<<b;
    cout<<"\n\t\t---------------------------------------\n";
}
int main()
{
    int i;
    petrol_pump t;
    cout<<"\t\t\t----------------------------\n";
    cout<<"\t\t\t**LPG HIGHWAY SERVICE** \n";
    cout<<"\t\t\t----------------------------\n";
    t.info();
    cout<<"\t\t 1. press 1 for Petrol:\n";
    cout<<"\t\t 2. press 2 for Diesel:\n";
    cout<<"\t\t Enter your choice :\n";
    cin>>i;
    switch(i)
    {
        case 1:
            t.petrol();
                break;
    
        case 2:

            t.diesel();
                break;
        default:
        cout<<"Enter a valid choice,please select from above give options;";
    }
}