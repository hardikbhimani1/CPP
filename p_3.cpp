#include<iostream>
using namespace std;
class test
{
    private:
        int tc,nc,cr;
        string d;
        int cal();
    public:
        void sch();
        void disp();
};  
int test::cal()
{
    cr=(nc/100)+1;
    return 0;
}