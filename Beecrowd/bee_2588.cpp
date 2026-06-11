#include <bits/stdc++.h>
using namespace std;

int main(){
    string p;
    while (cin >> p)
    {
        int aux = 0;
        map<char, int> pl;
        for (int i = 0; i < p.size(); i++)
        {
            pl[p[i]]++;
        }

        for(auto i : pl){
            if(i.second%2 == 0){

            }
            else{
                aux++;
            }
        }
        if(aux <= 0){
            cout << 0 << endl;
        }
        else{
            cout << aux - 1  <<  endl;
        }
    }
    
}