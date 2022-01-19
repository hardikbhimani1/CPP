#include<iostream>
using namespace std;
class student
{
    private:
        int admno;
        char sname[22];
        float eng,math,sci,total;
    int ctotal()
    {
        total=eng+math+sci;
        return total;
    }
    public:
    void takedata()
    {
        cout << "Enter Admition No. : ";
        cin >> admno;
        cout << "Enter Student Name : ";
        cin >> sname;
        cout << "Enter English Marks : ";
        cin >> eng;
        cout << "Enter Math Marks : ";
        cin >> math;
        cout << "Enter Science Marks : ";
        cin >> sci;
    }
    int ctotal1()
    {
        ctotal();
    }
    void showdata()
    {
        cout << "\nyour Admition No. : "<<admno;
        cout << "\nyour Student Name : "<<sname;
        cout << "\nyour English Marks : "<<eng;
        cout << "\nyour Math Marks : "<<math;
        cout << "\nyour Science Marks : "<<sci;
        cout<<"\nYour total mark is:"<<total;
    }
};
int main()
{
    student t1;
    t1.takedata();
    t1.ctotal1();
    t1.showdata();
}