#include <iostream>
using namespace std;
int main()
{
    char str[10];
    int i;
    cout << "\n Enter string :";
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        ;
    cout << "\n"
         << i;
}