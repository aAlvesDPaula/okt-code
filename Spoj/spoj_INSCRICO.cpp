#include <bits/stdc++.h>
using namespace std;
struct facul
{
    string n;
    int q = 1;
};

int main()
{
    int a;
    vector<facul> vet;
    while (cin >> a && a != 0)
    {
        for (int i = 0; i < a; i++)
        {
            bool ver = false;
            string name;
            facul nome;
            cin >> name >> nome.n;
            if (vet.empty())
            {
                vet.push_back(nome);
                ver = true;
            }
            else{
                for (int j = 0; j < vet.size(); j++)
                {
                    if(nome.n == vet[j].n){
                        vet[j].q++;
                        ver = true;
                    }
                }
            }
            if(!ver){
                vet.push_back(nome);
            }
        }
    }
    for(auto i : vet){
        cout << i.n << ' ' << i.q << endl;
    }
 return 0;
}