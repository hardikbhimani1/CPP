#include<iostream>
using namespace std;
class circle
{
    int c,r;
    public:
    void cir(int a)
    {
        r=a;
        c=3.14*r*r;
        cout << "\nC:"<<c;
    }
};
int main()
{
    circle t1,t2;
    t1.cir(5);
    t2.cir(10);
}





