#include<iostream>
using namespace std;
class area{
    double a_circl,a_triangle,a_rect;
    public:
    void circle(int x)
    {
        a_circl =x*x*3.14;
        cout<<"\n area of circle:"<<a_circl;
    }
    void triangle(int x,int y)
    {
         a_triangle =(x*y)*0.5;
        cout<<"\n area of triangle:"<<a_triangle;
    }
    void rectangle(double x,double y)
    {
        a_rect=x*y*2;
        cout<<"\n area of rectangle:"<<a_rect;
    }
};
int main()
{
    area c,t,r;
    c.circle(2);
    t.triangle(3,5);
    r.rectangle(2.5,3.5);
    
}