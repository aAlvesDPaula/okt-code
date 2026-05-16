#include <bits/stdc++.h>
using namespace std;

void ordena(vector<int> vet)
{
    int troca = 0;
    int aux = 0;
    for (int i = 0; i < vet.size(); i++)
    {
        for (int j = 0; j < vet.size()-1; j++)
        {
            if (vet[j] > vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                troca++;
            }
        }   
    }

     cout << "Optimal train swapping takes " << troca << " swaps." << endl;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int v, c;
        cin >> v;
        vector<int> vag;
        for (int j = 0; j < v; j++)
        {
            cin >> c;
            vag.push_back(c);
        }
        ordena(vag);

    }
}