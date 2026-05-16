#include <bits/stdc++.h>
using namespace std;
int main(){
    int tam;
    bool flag = true;
    while (cin >> tam && tam!=0)
    {
        if(!flag){
            cout << endl;
        }
        flag = false;
        int Taux = 0;
        vector<string> nome;
        for (int i = 0; i < tam; i++)
        {
            string  p;
            cin >> p;
            nome.push_back(p);
            if(p.size() > Taux){
                Taux = p.size();
            } 
        }

        for(int t  = 0; t < nome.size(); t++)
        {
            if(nome[t].size() == Taux)
                cout << nome[t] << endl;
            else{
                int dif = Taux - nome[t].size();
                for (int k = 0; k < dif; k++)
                {
                    cout << ' ';
                }
                cout << nome[t] << endl;
            }
        }
    }
    
}