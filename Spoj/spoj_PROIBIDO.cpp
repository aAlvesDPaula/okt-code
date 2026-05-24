#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL);
int main()
{
    fastio;
    int t;
    cin >> t;
    set<int> vet;
    for (int i = 0; i < t; i++)
    {   
        int valor;
        cin >> valor;
        vet.insert(valor);
    }
    int busca;
    while (cin >> busca)
    {
        if(vet.count(busca))
            cout << "sim" <<  endl;
        else
            cout << "nao" << endl;
    }
    
}