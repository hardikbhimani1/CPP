#include <iostream>
using namespace std;
int main()
{
    int P[5], Q[5], R[5], T_P[5], G[5], T_A[5], Y_B[5], i;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter P : ", i;
        cin >> P[i];
        cout << "Enter Q  : ", i;
        cin >> Q[i];
        cout << "Enter R  : ", i;
        cin >> R[i];
    }
    cout << "\n";
    cout << "\nP_No\tquntity\trate\tTotal\tGST\tTotal_Amount\n";
    for (i = 0; i < 3; i++)
    {
        T_P[i] = Q[i] * R[i];
        G[i] = T_P[i] * 0.05;
        T_A[i] = T_P[i] + G[i];
        cout << "\n"
             << P[i] << "\t" << Q[i] << "\t" << R[i] << "\t" << T_P[i] << "\t" << G[i] << "\t" << T_A[i];
    }
}