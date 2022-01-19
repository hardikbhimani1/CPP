#include<iostream>
using namespace std;
class batsman
{
    int bcode, inn, nout, runs,cnt;
    char bname[20];
    float batavg;
    void avg()
    {
        batavg=runs/(inn-nout);
    }
    public:
    int j,n;
    void readdata()
    {
        here:
        j=0;
        cout << "\nEnter batsman code : ";
        cin >> bcode;
        n=bcode;
       while(n>0)
        {
            n=n/10;
            j++;
        }
        if(j==4)
        {
            cout << "Enter batsman Name : ";
            cin >> bname;
            cout << "Enter Innings : ";
            cin >> inn;
            here1:
            cout << "Enter Not out : ";
            cin >> nout;
            if(inn<=nout)
            {
                cout<<"yout enter not out is bigger than inning";
                cout<<"\nre enter not out"<<endl;
                goto here1;
            }
            cout << "Enter Runs: ";
            cin >> runs;
        }
        else
        {
            cout<<"enter 4 digit bcode";
            goto here; 
        }
    }
    void clacavg()
    {
        avg();
    }
    void displaydata()
    {
        cout<<"B code\tB name\tInnnigs\tNotOut\tRuns\tAvg";
        cout<<"\n\n"<<bcode<<"\t"<<bname<<"\t"<<inn<<"\t"<<nout<<"\t"<<runs<<"\t"<<batavg;
    }
};
int main()
{
    batsman b1;
    b1.readdata();
    b1.clacavg();
    b1.displaydata();
}