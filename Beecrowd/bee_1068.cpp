#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> pilha1;
    stack<int> pilha2;
    string N;
    cout << "";
    while (getline(cin , N))
    {
        bool flag = true;
        for (int i = 0; i < N.size(); i++)
        {
            if(N[i] == '('){
                        pilha2.push(N[i]);
                    }
            if(N[i] == ')'){
                pilha1.push(N[i]);

                if(pilha1.size() >  pilha2.size()){
                    break;;
                }
            }
        }
        if(pilha1.size() == pilha2.size())
            cout << "correct" << endl;
        else
            cout << "incorrect"  << endl;

        while (!pilha1.empty())
        {
            pilha1.pop();
            
        }
        while (!pilha2.empty())
        {
            pilha2.pop();
        }
        
    }

    return 0;
}
