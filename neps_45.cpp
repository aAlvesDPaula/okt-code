#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int m[t][t] = {0};
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            int v;
            cin >> v;
            m[i][j] = v;
        }
    }
    int maior = 0;
    for (int i = 0; i < t; i++)
    {
        int soma;
        for (int j = 0; j < t; j++)
        {
            for (int k = 0; k < t; i++)
            {
                if(j!=k)
                soma+=m[i][k];
            }
            for (int k = 0; k < t; i++)
            {
                if(i!=k)
                soma+=m[k][j];
            }
        }
        if(soma > maior){
            maior = soma;
        }
    }
    cout << maior;
}