#include<iostream>
using namespace std;
int main()
{
	int i, j, k=65;

	for(i=65; i<=69; i++)
	{
		for(j=65; j<=i; j++)
		{
			if(i%2)
			{
				cout<<" "<<k;
				k++;
			}
			else
			{
				cout<<" "<<k+32;
				k++;
			}

		}
		cout<<"\n";
	}
}	