#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    int mat[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            int v;
            cin >> mat[i][j];
        }
    }
    vector<int> vet;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            int l = 0, c = 0;
            for (int q = 0; q < a; q++)
            {
                if (q != i)
                {
                    c += mat[q][j];
                }

                if(q != j)
                {
                    l += mat[i][q];
                }
            }
            int max = c + l;
            vet.push_back(max);
        }
    }
    sort(vet.rbegin(), vet.rend());
    cout << vet[0];
}