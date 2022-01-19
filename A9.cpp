#include <iostream>
using namespace std;
int main()
{
    int Phy[5], che[5], mth[5], T_m[5], Per[5], g[5], i;
    for (i = 0; i < 2; i++)
    {
        cout << "Student : \n";
        cout << "Enter Phy : ";
        cin >> Phy[i];
        cout << "Enter che : ";
        cin >> che[i];
        cout << "Enter mth : ";
        cin >> mth[i];
        cout << "\n";
    }
    cout << "\n";
    cout << "\nStudent\tphy\tche\tmth\tTotal\tPer\tgrade\n";
    for (i = 0; i < 2; i++)
    {
        T_m[i] = Phy[i] + che[i] + mth[i];
        Per[i] = T_m[i] / 3;
        if (Per[i] >= 75)
        {
            cout << "\n"
                 << i + 1 << "\t " << Phy[i] << "\t " << che[i] << "\t " << mth[i] << "\t " << T_m[i] << "\t " << Per[i] << "\tA";
        }
        else if (Per[i] >= 60 && Per[i] < 75)
        {
            cout << "\n"
                 << i + 1 << "\t " << Phy[i] << "\t " << che[i] << "\t " << mth[i] << "\t " << T_m[i] << "\t " << Per[i] << "\tB";
        }
        else if (Per[i] >= 45 && Per[i] < 60)
        {
            cout << "\n"
                 << i + 1 << "\t " << Phy[i] << "\t " << che[i] << "\t " << mth[i] << "\t " << T_m[i] << "\t " << Per[i] << "\tC";
        }
        else if (Per[i] >= 35 && Per[i] < 45)
        {
            cout << "\n"
                 << i + 1 << "\t " << Phy[i] << "\t " << che[i] << "\t " << mth[i] << "\t " << T_m[i] << "\t " << Per[i] << "\tD";
        }
        else
        {
            cout << "\n"
                 << i + 1 << "\t " << Phy[i] << "\t " << che[i] << "\t " << mth[i] << "\t " << T_m[i] << "\t " << Per[i] << "\tFail";
        }
    }
}