#include<iostream>
using namespace std;
int main()
{
	char str[5];
	int i,a=0;
	cout<<"Enter string:";
	gets(str);
	for(i=0;i<5;i++)
	{
		if(str>0)
		{
			cout<<" "<<int(str[i]);
			a++;
		}
	}
	cout<<"\n"<<a;
}