#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;
#define ll long long 
ll n, T;
ll vet[maxn];
bool ok(ll x)
{
    ll soma = 0;
    for (ll i = 1; i < n; i++)
    {
        if (soma >= T)
        {
            break;
        }
        soma += (x / vet[i]);
    }

    return (soma >= T);
}
int buscab(void)
{
    int i = 0, meio;
    long long f = 1e10;
    ll ans;
    while (i <= f)
    {
        meio = (i + f) / 2;
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
int main()  
{

    cin >> n >> T;

    for (int i = 0; i < n; i++)
        cin >> vet[i];
    cout << buscab();
}