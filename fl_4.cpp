#include <iostream>
using namespace std;
int main()
{
    int a, b, i;

    cout << "nter number:";
    cin >> a;
    cout << "enter number:";
    cin >> b;
    for (i = ++a; i < b; i++)
    {
        cout << "\n a : " << i;
    }
}