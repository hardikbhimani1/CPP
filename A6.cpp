#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5], i, j = 4;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter a : ";
        cin >> a[i];
    }
    cout << "\n";
    for (i = 0; i <= 4; i++)
    {
        b[i] = a[j--];
        cout << "\n"
             << b[i];
    }
    cout << "\n";
    for (i = 0; i <= 4; i++)
    {
        cout << "\n"
             << b[i];
    }
}