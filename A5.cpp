#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5], i;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter a: ", i;
        cin >> a[i];
    }
    cout << "\n";
    for (i = 4; i >= 0; i--)
    {
        b[i] = a[i];
        cout << "\n"<< b[i];
    }
}