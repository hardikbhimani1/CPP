#include <iostream>
using namespace std;
int main()
{
    int a[5][5], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "a :";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << "\n";
    }
}