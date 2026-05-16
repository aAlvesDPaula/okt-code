#include <bits/stdc++.h>
using namespace std;
int main()
{
    string cpf;
    while (cin >> cpf)
    {
        int b1 = 0, aux = 1, b2 = 0;
        for (int i = 0; i < cpf.size(); i++)
        {
            cout << cpf[i];
            if ((i + 1) % 3 == 0 && i + 1 < 9)
            {
                cout << '.';
            }
            b1 += (cpf[i] - '0') * aux;
            aux++;
        }
        if ((b1 % 11) == 10)
        {
            b1 = 0;
        }
        else
            b1 = b1 % 11;
        aux = 0;
        for (int i = 9; i >= 0; i--)
        {
            b2 += (cpf[aux] - '0') * i;
            aux++;
        }
        if ((b2 % 11) == 10)
        {
            b2 = 0;
        }
        else
            b2 = b2 % 11;

        cout << '-' << b1 << b2 << endl;
    }
}