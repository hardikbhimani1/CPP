#include<iostream>
using namespace std;
class inventry
{
    public:
        long long o1,s1,s2,s3,s4,s5,s6;
        long long pc,qt;
    private:

    int f1()
    {
        cout<<"********************** D-MART ***********************";

        cout<<"\n-----------------------------------------------";
        cout<<"\n\n\t\tMY INVENTORY";
        cout<<"\n-----------------------------------------------";
        cout<<"\n\tEnter Milk quntity:";
        cin>>s1;
        cout<<"\n\tEnter Butter quntity:";
        cin>>s2;
        cout<<"\n\tEnter Paneer quntity:";
        cin>>s3;
        cout<<"\n\tEnter Ghee quntity:";
        cin>>s4;
        cout<<"\n\tEnter Dahi quntity:";
        cin>>s5;
        cout<<"\n\tEnter Cheese quntity:";
        cin>>s6;

        cout<<"\n\npress 1 for show invantry\npress 2 for shoping";
        cout<<"\nselect any option:";
        cin>>o1;

        if(o1==1)
        {
            cout<<"\nAvailable Milk quntity is :"<<s1;
            cout<<"\nAvailable Butter quntity is :"<<s2;
            cout<<"\nAvailable Paneer quntity is :"<<s3;
            cout<<"\nAvailable Ghee quntity is :"<<s4;
            cout<<"\nAvailable Dahi quntity is :"<<s5;
            cout<<"\nAvailable Cheese quntity is :"<<s6;
        }
        else if (o2==2)
        {
            cout<<"\n press 1: for Milk we have :"<<s1<<":in stock:";
            cout<<"\n press 2: for Butter we have :"<<s2<<":in stock:";
            cout<<"\n press 3: for Paneer we have :"<<s3<<":in stock:";
            cout<<"\n press 4: for Ghee we have :"<<s4<<":in stock:";
            cout<<"\n press 5: for Dahi we have :"<<s5<<":in stock:";
            cout<<"\n press 6: for Cheese we have :"<<s5<<":in stock:";
            cout<<"\nselect your choice:";
            cin>>pc;

            if(pc==1)
            {
                cout<<"\nYou choose milk:";
                f1(s1);
               // p=27;
               // tp=p*qt;
            }
            else if(pc==2)
            {
                cout<<"\nEnter product name:";
                quntity(s2);
                s2=b;
                p=30;
                tp=p*qt;
            }
            else if(pc==3)
            {
                cout<<"\nEnter product name:";
                quntity(s3);
                s3=b;
                p=40;
                tp=p*qt;
            }
            else if(pc==4)
            {
                cout<<"\nEnter product name:";
                quntity(s4);
                s4=b;
                p=100;
                tp=p*qt;
            }
            else if(pc==5)
            {
                cout<<"\nEnter product name:";
                quntity(s5);
                s5=b;
                p=20;
                tp=p*qt;
            }
            else if(pc==6)
            {
                cout<<"\nEnter product name:";
                quntity(s6);
                s6=b;
                p=50;
                tp=p*qt;
            }
        }
        int quntity(int a)
        {
            here:
            cout<<"We have "<<a<<" peace enter of your selected product \n enter your quntity:";
            cin>>qt;
            if(qt<=a)
            {
                b=a-qt;
            }
            else
            {
                cout<<"\nyour enter quntity is more than our stock";
                cout<<"\nre enter quntity";
                goto here;
            }
            return b;
        }
    }

};
int main()
{

}
