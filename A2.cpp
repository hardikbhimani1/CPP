#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5], i;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter a : ";
        cin >> a[i];
    }
    cout << "\n";
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter b : ";
        cin >> b[i];
    }
    for (i = 0; i <= 4; i++)
    {
        cout << "\na :" << a[i];
    }
    printf("\n");
    for (i = 0; i <= 4; i++)
    {
        cout << "\nb :" << b[i];
    }
}