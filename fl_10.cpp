#include <iostream>
using namespace std;
int main()
{
    char ch;

    for (ch = 65; ch <= 90; ch++)
    {

        cout << ch;
        cout << "=" << int(ch);
        cout << "\t";
    }
}