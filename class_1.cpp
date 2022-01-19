#include<iostream>
using namespace std;
class bmw
{
    public:
        void buyer(string b)
        {
            cout << "\nthis car is sold to " << b;
        }
        void tech(string technology)
        {
            cout << "\n car has "<< technology <<" technology ";
        }
        void allblack()
        {
            cout << "\ncar is all black";
        }
};
int main()
{
    bmw a8,gt;
    a8.buyer("jemin");
    a8.tech("spot");
    a8.allblack();
    cout<<"\n";
    gt.buyer("jenil");
    gt.tech("letest");
}