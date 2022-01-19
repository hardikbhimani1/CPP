#include<iostream>
using namespace std;
class avr 
{
     private:
     int fn;
     float j;
     string ds;
     float dis,f;
     int calfuel();

     public:
    void feedinfo();
    void showinfo();
};
int avr::calfuel()
{
    if(j<=1000)   
    {  
        return 500;
    }
    else if(j>1000 && j<=2000)   
    {   
        return 1100;
    }
    else if(j>2000)   
    {
        return 2200;
    }
    
}
void avr::feedinfo()
{
    cout<<"enter flight number:";
    cin>>fn;
    cout<<"enter destination:";
    cin>>ds;
    cout<<"enter distance:";
    cin>>dis;
    j=dis;
    cout<<"your fule is :"<<calfuel()<<"l";
}
void avr::showinfo()
{
    cout<<"\nflight_N\tdestination\tdistance\tfuel";
    cout<<"\n"<<fn<<"\t\t"<<ds<<"\t\t"<<dis<<"\t\t"<<calfuel();
}
int main()
{
    avr t1;
    t1.feedinfo();
    t1.showinfo();
}