#include <iostream>
using namespace std;
int main()
{
    char str[10], str1[10];
    int i, j, k = 0;
    cout << "Enter string:";
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        ;
    for (j = 0; j <= i; j++)
    {
        str1[k] = str[j];
        if (str1[k] != '\0')
        {
            cout << char(str1[k] - 32);
        }
    }
    str1[k] = '\0';
}