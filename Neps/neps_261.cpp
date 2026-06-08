#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> vet;

int buscab(int x)
{
    int i = 0, f = n - 1, meio;
    while (i <= f)
    {
        meio = (i + f) / 2;
        if (vet[meio] == x)
        {
            while (vet[meio - 1] == x)
                meio--;
            return meio;
            /* tem menor complexidade
            if(vet[meio - 1] == x){
            if = meio -1;
             }
            else return meio;*/
        }
        if (vet[meio] < x)
            i = meio + 1;
        if (vet[meio] > x)
            f = meio - 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin >> n >> m;
    vet.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        cout << buscab(v) << '\n';
    }
}
