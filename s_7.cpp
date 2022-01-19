#include <iostream>
using namespace std;
int main()
{
    char str[10], str1[10] = "";
    int i, j;
    cout << "Enter string:";
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        str1[i] = str[i] - 32;
    }
    cout << str1;
}