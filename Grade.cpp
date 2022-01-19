#include <iostream>
using namespace std;
int main()
{
    int M, P, C, Tot, Per;
    cout << "\nEnter Maths marks : ";
    cin >> M;
    cout << "\nEnter Physics marks : ";
    cin >> P;
    cout << "\nEnter Chemistry marks : ";
    cin >> C;
    Tot = M + P + C;
    cout << "\nTotal Marks : " << Tot;
    Per = Tot / 3;
    cout << "\nPersantage : " << Per;
    if (Per >= 75)
    {
        cout << "\nGrade A : " << Per;
    }
    else if (Per >= 60 && Per < 75)
    {
        cout << "\nGrade B : " << Per;
    }
    else if (Per >= 45 && Per < 60)
    {
        cout << "\nGrade C : " << Per;
    }
    else if (Per >= 35 && Per < 45)
    {
        cout << "\nGrade D : " << Per;
    }
    else
    {
        cout << "\nYou are Fail \n  Better Luck Next Time";
        cout << "\nYour Persantage : " << Per;
    }
}