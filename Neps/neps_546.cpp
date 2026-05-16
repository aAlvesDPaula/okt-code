#include <bits/stdc++.h>
using namespace std;
bool ordNome(const string &a, const string &b){
    return(a < b);
}
int main(){
    int p, g;
    vector<string> v;
    cin >> p >> g;
    for (int i = 0; i < p; i++)
    {
        string nome;
        cin >> nome;
        v.push_back(nome);
    }
    sort(v.begin(), v.end(), ordNome);
    cout << v[g-1];
}