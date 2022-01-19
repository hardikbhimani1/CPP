#include <iostream>
using namespace std;
int main()
{
    int a[5], i;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter a : ";
        cin >> a[i];
    }
    for (i = 0; i <= 4; i++)
    {
        cout << "\na  : " << a[i];
    }
}