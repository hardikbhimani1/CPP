#include<iostream>
using namespace std;
class s_i
{
    float p,r,n,ans;
    public:
    void in(float a,float b,float c)
    {
        p=a;
        r=b;
        n=c;
        ans=p*r*n/100;
        cout << "\nsimple intrest:"<<ans;
    }
};
int main()
{
    s_i t1,t2;
    t1.in(500,1.5,1);
    t2.in(1000,2,1);
}