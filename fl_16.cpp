//1, 2, 4, 8, 16, ....., n
#include<iostream>
using namespace std;
int main()
{
	int i, n=64;
	
	for(i=1; i<=n; i=i*2)
	{
		cout<<"\t"<<i;
	}
	
}
