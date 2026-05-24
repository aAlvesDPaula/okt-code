#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    stack<int> chave;  
    for (int i = 0; i < t; i++)
    {
         
        string frase;
        while (getline(cin, frase))
        {
            for (int j = 0; j < frase.size(); j++)
            {
                if(frase[j] == '{')
                    chave.push(frase[j]);
                else if(chave.empty() && frase[j] == '}')
                {chave.push(frase[j]);
                break;}
                else if(frase[j] == '}' && chave.top() == '{')
                    chave.pop();
            }
        }
    }
    if(chave.empty())
            cout << 'S';
        else 
            cout << 'N';
    
}