#include<iostream>
using namespace std;
class trip
{
    private:
        long long sn,lbn,lbs,lbc,sbn,sbs,sbc,dn,p,q,r,s;
        long long x,y,ans1,ans2,ans3,ans4,ans5,largest;
        long long a1x,a1y,a2x,a2y,a3x,a3y,a4x,a4y,a5x,a5y;
        long long tlbs,tsbs,ts;
    public:
    int info()
    {
        cout<<"Enter number of students:";
        cin>>sn;
        cout<<"Enter number of larger bus:";
        cin>>lbn;
        cout<<"Enter number of seat of larger bus:";
        cin>>lbs;
        cout<<"Enter cost of larger bus:";
        cin>>lbc;
        cout<<"Enter number of smaller bus:";
        cin>>sbn;
        cout<<"Enter number of seat of smaller bus:";
        cin>>sbs;
        cout<<"Enter cost of smaller bus:";
        cin>>sbc;
        cout<<"Enter number of drive:";
        cin>>dn;
    }
    int formula()
    {
        tlbs=lbn*lbs;//number of total largest bus
        tsbs=sbn*sbs;
        ts=tlbs+tsbs;    
        if(ts>=sn){
            goto here;
        }
        else{
            cout<<"sorry your students if more than our bus seats";
            goto here1;
        }
        here:
        y=sn/sbs;
        if(dn>=y)
        {
            x=0;
            ans1=(lbc*x)+(sbc*y);
            a1x=x;
            a1y=y;
        }
        else{
            ans1=0;
        }
        x=sn/lbs;
        if(dn>=x)
        {
            y=0;
            ans2=(lbc*x)+(sbc*y);
            a2x=x;
            a2y=y;
        }
        else{
            ans2=0;
        }
        if(ans1!=0)
        {
            x=0;
            y=dn;
            ans3=(lbc*x)+(sbc*y);
            a3x=x;
            a3y=y;
        }
        else{
            ans3=0;
        }
        if(ans2!=0)
        {
            y=0;
            x=dn;
            ans4=(lbc*x)+(sbc*y);
            a4x=x;
            a4y=y;
        }
        else
        {
            ans4=0;
        }
        p=sn-(sbs*dn);
        q=lbs-sbs;
        x=p/q;
        r=sn-(lbs*dn);
        s=sbs-lbs;
        y=r/s;
        ans5=(lbc*x)+(sbc*y);
        a5x=x;
        a5y=y;
        if(ans1==0)
        {
            cout<<"\nif you select '"<<a2x<<"' larger bus and '"<<a2y<<"' smaller bus : "<<ans2;
            cout<<"\nif you select '"<<a4x<<"' larger bus and '"<<a4y<<"' smaller bus : "<<ans4;
            cout<<"\nif you select '"<<a5x<<"' larger bus and '"<<a5y<<"' smaller bus : "<<ans5;
            cout<<"\n";
            largest=ans2;
            if(ans4<largest)
            {
                largest=ans4;
            }
            if(ans5<largest)
            {
                largest=ans5;
            }
            if(largest==ans2)
            {   
                cout<<"\nYour minimum cost is:"<<ans2;
                cout<<"\nSo you choose '"<<a2x<<"' larger bus and '"<<a2y<<"' smaller bus";
            }
            else if(largest==ans4)
            {
                cout<<"\nYour minimum cost is:"<<ans4;
                cout<<"\nSo you choose '"<<a4x<<"' larger bus and '"<<a4y<<"' smaller bus";
            }
            else if(largest==ans5)
            {
                cout<<"\nYour minimum cost is:"<<ans5;
                cout<<"\nSo you choose '"<<a5x<<"' larger bus and '"<<a5y<<"' smaller bus";
            }
        }
        else if(ans2==0)
        {
            cout<<"\nif you select '"<<a1x<<"' larger bus and '"<<a1y<<"' smaller bus : "<<ans1;
            cout<<"\nif you select '"<<a3x<<"' larger bus and '"<<a3y<<"' smaller bus : "<<ans3;
            cout<<"\nif you select '"<<a5x<<"' larger bus and '"<<a5y<<"' smaller bus : "<<ans5;
            cout<<"\n";
            largest=ans1;
            if(ans3<largest)
            {
                largest=ans3;
            }
            if(ans5<largest)
            {
                largest=ans5;
            }
            if(largest==ans1)
            {   
                cout<<"\nYour minimum cost is:"<<ans1;
                cout<<"\nSo you choose '"<<a1x<<"' larger bus and '"<<a1y<<"' smaller bus";
            }
            else if(largest==ans3)
            {
                cout<<"\nYour minimum cost is:"<<ans3;
                cout<<"\nSo you choose '"<<a3x<<"' larger bus and '"<<a3y<<"' smaller bus";
            }
            else if(largest==ans5)
            {
                cout<<"\nYour minimum cost is:"<<ans5;
                cout<<"\nSo you choose '"<<a5x<<"' larger bus and '"<<a5y<<"' smaller bus";
            }
        }
        else
        {
            cout<<"\nif you select '"<<a1x<<"' larger bus and '"<<a1y<<"' smaller bus : "<<ans1;
            cout<<"\nif you select '"<<a2x<<"' larger bus and '"<<a2y<<"' smaller bus : "<<ans2;
            cout<<"\nif you select '"<<a3x<<"' larger bus and '"<<a3y<<"' smaller bus : "<<ans3;
            cout<<"\nif you select '"<<a4x<<"' larger bus and '"<<a4y<<"' smaller bus : "<<ans4;
            cout<<"\nif you select '"<<a5x<<"' larger bus and '"<<a5y<<"' smaller bus : "<<ans5;
            cout<<"\n";
            largest=ans1;
            if(ans2<largest)
            {
                largest=ans2;
            }
            if(ans3<largest)
            {
                largest=ans3;
            }
            if(ans4<largest)
            {
                largest=ans4;
            }
            if(ans5<largest)
            {
                largest=ans5;
            }
            if(largest==ans1)
            {   
                cout<<"\nYour minimum cost is:"<<ans1;
                cout<<"\nSo you choose '"<<a1x<<"' larger bus and '"<<a1y<<"' smaller bus";
            }
             if(largest==ans2)
            {   
                cout<<"\nYour minimum cost is:"<<ans2;
                cout<<"\nSo you choose '"<<a2x<<"' larger bus and '"<<a2y<<"' smaller bus";
            }
            else if(largest==ans3)
            {
                cout<<"\nYour minimum cost is:"<<ans3;
                cout<<"\nSo you choose '"<<a3x<<"' larger bus and '"<<a3y<<"' smaller bus";
            }
            else if(largest==ans4)
            {
                cout<<"\nYour minimum cost is:"<<ans4; 
                cout<<"\nSo you choose '"<<a4x<<"' larger bus and '"<<a4y<<"' smaller bus";
            }
            else if(largest==ans5)
            {
                cout<<"\nYour minimum cost is:"<<ans5;
                cout<<"\nSo you choose '"<<a5x<<"' larger bus and '"<<a5y<<"' smalle                                              r bus";
            }
        }
        here1:
        cout<<"\n\n.......................than you...........................";
    }
};
int main()
{
    trip t;
    t.info();
    t.formula();
}