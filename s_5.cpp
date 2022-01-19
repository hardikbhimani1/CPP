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
    for (j = i - 1; j >= 0; j--, k++)
    {
        str1[k] = str[j];
    }
    str1[k] = '\0';
    cout << "\n Reverse : " << str1;
}