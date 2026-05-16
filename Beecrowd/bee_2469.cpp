#include <bits/stdc++.h>
using namespace std;
struct rep
{
    int n = 0;
    int q = 0;
};
bool maior(const rep &a, const rep &b)
{
    if (a.q == b.q)
    {
        return a.n > b.n;
    }
    return a.q > b.q;
}

int main()
{
    int tam;
    cin >> tam;
    vector<rep> vet;

    for (int i = 0; i < tam; i++)
    {
        int valor;
        cin >> valor;
        rep nota;
        if (vet.empty())
        {
            nota.n = valor;
            nota.q++;
            vet.push_back(nota);
        }
        else
        {
            bool ver = false;
            for (int j = 0; j < vet.size(); j++)
            {
                nota.n = valor;
                if (vet[j].n == nota.n)
                {
                    vet[j].q++;
                    ver = true;
                    break;
                }
            }
            if (!ver)
            {
                nota.n = valor;
                nota.q = 1;
                vet.push_back(nota);
            }
        }
    }
    sort(vet.begin(), vet.end(), maior);
   cout << vet[0].n;

    return 0;
}
