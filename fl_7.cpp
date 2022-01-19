#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2)
        {
            cout << " is odd\t" << i;
        }
        else
        {
            cout << "is even\t" << i;
        }
    }
}