#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    string nome;
    char tam;
    string cor;
} blusa;
bool orden(const blusa &a, const blusa &b)
{
    if (a.cor != b.cor)
    {
        return a.cor < b.cor;
    }
    else if (a.tam != b.tam)
    {
        return a.tam > b.tam;
    }
    else if (a.nome != b.nome)
    {
        return a.nome < b.nome;
    }
    return 0;
}
int main()
{
    int n;
    bool flag = true; // flag para salto de linhas apos cada teste
    while (cin >> n && n != 0)
    {
        if(!flag){
            cout << endl;
        }
        cin.ignore();
        vector<blusa> b;
        blusa blusas;
        for (int i = 0; i < n; i++)
        {
            getline(cin, blusas.nome);
            cin >> blusas.cor >> blusas.tam;
            cin.ignore();
            b.push_back(blusas);
        }
        sort(b.begin(), b.end(), orden);
        for (int j = 0; j < b.size(); j++)
        {
            cout << b[j].cor << " ";
            cout << b[j].tam << " ";
            cout << b[j].nome << endl;
        }
        flag = false;
    }
}