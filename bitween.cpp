#include<iostream>
using namespace std;
int main()
{
	int x, y;

	cout<<"Enter value of X:";
	cin>>x;
	cout<<"\nEnter value of y:";
	cin>>y;
	if(x<2000 || x>3000)
	{
		cout<<"\n X is : "<<x;
	}
	else if(y>100 && y<500)
	{
		cout<<"\n Y is :"<<y;
	}
	else
	{

		cout<<"\n Value is invalid";
	}

}