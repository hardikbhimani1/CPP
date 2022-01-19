#include<iostream>
using namespace std;
int main()
{
	char i, j,sp=40;
	for(i=65; i<=69; i++)
	{
		for(j=1; j<=sp; j++)
			cout<<" ";
		for(j=65; j<=i; j++)
		{
			cout<<" "<<j;
		}
		cout<<"\n";
		sp--;
	}
}