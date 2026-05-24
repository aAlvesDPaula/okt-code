#include <bits/stdc++.h>
using namespace std;
struct dupla
{
    int n, q = 1;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<dupla> vet;
    dupla val;

    while (cin >> val.n)
    {
        bool ver = false;
        if (vet.empty())
        {
            vet.push_back(val);
        }
        else
        {
            for (int i = 0; i < vet.size(); i++)
            {
                if (vet[i].n == val.n)
                {
                    vet[i].q++;
                    ver = true;
                    break;
                }
            }
            if (!ver)
            {
                vet.push_back(val);
            }
        }
    }

    for (auto i : vet)
    {
        cout << i.n << " " << i.q << endl;
    }
}