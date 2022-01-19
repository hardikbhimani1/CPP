#include<iostream>
using namespace std;
int main()
{
    int P, Q, Tot, Tot_P;
	float GST;
	cout<<"\n Enter Price:";
	cin>>P;
	cout<<"\n Enter Quantity: ";
	cin>>Q;
	Tot= P * Q;
	Tot_P = Tot * 0.9;
	cout<<"\n Total Price: "<<Tot_P;
	GST = Tot_P * 1.18;
	cout<<"\n Your Bill : "<<GST;
}

