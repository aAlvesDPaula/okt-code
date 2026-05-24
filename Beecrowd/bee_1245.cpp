#include <bits/stdc++.h>
using namespace std;
struct sapatos
{
    int n;
    int e = 0, d = 0;
};

int main()
{

    int s;
    while (cin >> s)
    {
        vector<sapatos> vet;

        char lado;
        for (int j = 0; j < s; j++)
        {
            sapatos aux;
            cin >> aux.n;
            cin >> lado;
            bool flag = false;
            if (vet.empty())
            {
                if (lado == 'E')
                    aux.e++;
                else if (lado == 'D')
                    aux.d++;
                vet.push_back(aux);
            }
            else
            {
                for (int i = 0; i < vet.size(); i++)
                {
                    if (vet[i].n == aux.n)
                    {
                        if (lado == 'E')
                            vet[i].e++;
                        else if (lado == 'D')
                            vet[i].d++;
                        flag = true;
                    }
                }
            
            if (!flag)
            {
                if (lado == 'E')
                    aux.e++;
                else if (lado == 'D')
                    aux.d++;

                vet.push_back(aux);
            }
        }
        }
        int q = 0;
        for (int i = 0; i < vet.size(); i++)
        {
            if (vet[i].e > 0 && vet[i].d > 0)
            {
                if (vet[i].e >= vet[i].d)
                {
                    q += vet[i].d;
                }
                else
                    q += vet[i].e;
            }
        }
        cout << q << endl;
    }
}