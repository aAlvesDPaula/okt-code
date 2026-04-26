#include <bits/stdc++.h>
using namespace std;
int main()
{

    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        vector<int> lista;
        int p, troca = 0;
        cin >> p;
        for (int j = 0; j < p; j++)
        {
            int a;
            cin >> a;
            lista.push_back(a);
        }
        vector<int> listaO = lista;
        sort(listaO.begin(), listaO.end(), greater<int>());
        int ntroca = 0;
        for (int k = 0; k < listaO.size(); k++)
        {
            if(lista[k] == listaO[k])
                ntroca++;
        }
        cout << ntroca << endl;
        lista.clear();
        listaO.clear();
    }
}