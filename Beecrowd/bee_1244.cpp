#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, j = 0;
    string frase;
    cin >> v;
    stringstream ss(frase);
    string palavra;
    vector<string> palavras;
    map<string, int, greater<string>> frases;
    while (j < v)
    {
        cout << " ";
        getline(cin, frase);

        while (ss >> palavra)
        {
            palavras.push_back(palavra);   
        }
        for (int i = 0; i < palavras.size(); i++)
        {
            frases.insert({palavras[i], palavras[i].size()});
        }
        for(const auto& f : frases){
            cout << f.first;
        }
        
    }
}