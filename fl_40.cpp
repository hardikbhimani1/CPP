#include<iostream>
using namespace std;
int main()
{
	int i, j, k=1, sp=40;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=sp; j++)
			cout<<" ";
		for(j=1; j<=i; j++)
		{
			cout<<" "<<k++;
		}
		cout<<"\n";
		sp--;
	}
}