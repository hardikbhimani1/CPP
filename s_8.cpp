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
        if (str[i] > 97 && str[i] < 122)
        {
            str1[i] = str[i] - 32;
        }
        else if (str[i] == 32)
        {
            str1[i] = str[i];
        }
    }
    cout << str1;
}