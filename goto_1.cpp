#include<iostream>
using namespace std;
int main()
{
	int a=1,b;
	a1:
	if(a<=5)
	{
		b=1;
		b1:
		if(b<=a)
		{
			cout<<"*";
			b++;
			goto b1;
		}
		cout<<"\n";
		a++;
		goto a1;
	}
	
}
