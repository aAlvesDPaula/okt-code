#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >>n;
        vector<int> vet;
        for (int j = 0; j < n; i++)
        {
            int car;
            cin >> car;
            vet.push_back(car);
        }
        int aux = 0;
        for (int k = 0; k < vet.size()-1; k++)
        {
            if(vet[k] != vet[k+1])
                aux++;
        }
        cout << aux; 
    }
    return 0;
}