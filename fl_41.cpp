#include<iostream>
using namespace std;
int main()
{
	int i, j, l=5, p=5;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=9; j++)
		{
			if(j==l || j==p)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		l--;
		p++;
	}
	for(i=5; i>=1; i--)
	{
		for(j=9; j>=1; j--)
		{
			if(j==l || j==p)
			{
			    cout<<"* ";
			}
			else
			{
			    cout<<"  ";
			}
		}
    cout<<"\n";
		l++;
		p--;
	}
}