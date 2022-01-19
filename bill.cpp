#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,x,g;
	cout<<"enter unit:";
	cin>>x;
	if(x<=100)
	{
			a=(x*0.6)+50;
			cout<<"your bill amount : "<<a;
	}
	else if (x>100 && x<=300)
	{
		 b=x-100;
		 c=(b*0.8)+110;
		cout<<"your bill amount : "<<c ;
	}
	else if (x>300)
	{
		     e=x-300;
		     f=(e*0.9)+270;
		     if(f<=300)
		     {
			    cout<<"your bill amount is : "<<f;
		     }
		     else
		     {
			    g=f*1.15;
		        cout<<"your bill amount is : "<<g;
		     }
	}
}



