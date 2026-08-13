#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >>n;
    for(int i = 0; i < n; i++)
    {
        set<char> a;
        int t;
        int aux = 0;
        string p;
        cin >> t >> p;
        
        for(int j = 0; j < t; j++)
        {

            if(a.empty()){
                aux+=2;
                a.insert(p[j]);
            }
            else if(a.count(p[j])){
                aux+=1;
            }
            else{
                aux+=2;
                a.insert(p[j]);
            }
        }
        cout << aux << endl;
    }
}