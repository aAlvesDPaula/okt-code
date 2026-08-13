#include <bits/stdc++.h>
using namespace std;
const int nmax = 10000000;
int m, n;
int M[nmax];
bool ok(int x)
{
    int soma = 0;

    for (int i = 0; i <= m; i++)
    {
        soma += (M[i]/x);
    }
    return soma >= n;
    
}
int buscab(void)
{
    int i = 1, f = 10000, ans;
    while (i <= f)
    {
        int meio = (i + f) / 2;
        if (ok(meio))
        {
            ans = meio;
            i = meio + 1;
        }
        else
            f = meio - 1;
    }
    return ans;
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> M[i];
    }
    cout << buscab() << endl;
    
}