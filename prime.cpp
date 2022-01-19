#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cout<<"enter n:";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
    
}

