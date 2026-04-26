#include <bits/stdc++.h>
using namespace std;
int main(){
    int tam;
    cin >> tam;
    for (int i = 0; i < tam; i++)
    {
        int j;
        cin >> j;
        vector<int> vet;
        for (int k = 0; k < j; k++)
        {
            int h;
            cin >> h;
            vet.push_back(h);
        }
        sort(vet.begin(), vet.end());
        for (int k = 0; k < vet.size(); k++)
        {
            if(k == vet.size() - 1){
                cout << vet[k] << endl;
            }
            else{
                cout << vet[k] << " ";
            }
        }
        
    }
    
}