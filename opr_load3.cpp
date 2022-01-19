#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
public:
    loc(){}
    loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
void show()
    {
        cout<<"\n\n longitude:"<<longitude<<"";
        cout<<"latitude:"<<latitude<<"\n";
    }
    loc operator/(loc op2);
};
    loc loc :: operator/(loc op2)
    {
        loc temp;
        temp.longitude=longitude/op2.latitude;
        temp.latitude=latitude/op2.latitude;
        return temp;
    }
    int main()
    {
        loc ob1(10,20),ob2(5,30);
        ob1.show();
        ob2.show();
        ob1=ob1/ob2;
        ob1.show();
        return 0;        
    }
