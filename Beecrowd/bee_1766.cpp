#include <bits/stdc++.h>
using namespace std;
typedef struct rena
{
    string nome;
    int peso;
    int idade;
    float altura;
} rena;
bool Porpeso(const rena &na, const rena &nb)
{
    if (na.peso == nb.peso)
    {
        if (na.idade == nb.idade)
        {
            if (na.altura == nb.altura)
            {
                if (na.nome == nb.nome)
                {
                }
                else
                    return na.nome < nb.nome;
            }
            else
                return na.altura < nb.altura;
        }
        else
            return na.idade < nb.idade;
    }
    else
        return na.peso > nb.peso;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        vector<rena> vet;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            rena renas;
            cin >> renas.nome;
            cin >> renas.peso;
            cin >> renas.idade;
            cin >> renas.altura;
            vet.push_back(renas);
        }
        sort(vet.begin(), vet.end(), Porpeso);
            cout << "CENARIO {" << i+1 << "}" << endl;
            for (int j = 0; j < m; j++)
            {
                cout << j+1 << " - " << vet[j].nome << endl;
            }
    }
}