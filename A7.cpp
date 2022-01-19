#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5], c[10], i;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter a : ";
        cin >> a[i];
    }
    cout << "\n";
    for (i = 0; i < 5; i++)
    {
        cout << "Enter b : ";
        cin >> b[i];
    }
    for (i = 0; i <= 4; i++)
    {
        c[i] = a[i];
        cout << "\nc :" << c[i];
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = b[i];
        cout << "\nc : " << c[i];
    }
}