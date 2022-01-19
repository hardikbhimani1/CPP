#include <iostream>
using namespace std;
int main()
{
    char ch, a;
    for (ch = 65; ch <= 90; ch = ch + 2)
    {
        cout << "\t" << ch;
        cout << "\t" << char(ch + 33);
    }
}