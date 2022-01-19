#include<iostream>
using namespace std;
int main()
{
	int i, j;
	i=1;
	while(i<=5)
	{
		for(j=1; j<=i; j++)
		{
			cout<<" "<<j;
		}
		cout<<"\n";
		i++;
	}

}