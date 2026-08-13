#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    string a;
    while(getline(cin , a)){
        vector<char> p;
        int in, j;
        cin.ignore();

        for (size_t i = 0; i < a.size(); i++)
        {
            if(a[i] == '['){
                in = i;
                for (j = i+1; j < a.size() && (a[j]!= ']'); j++)
                {
                    p.push_back(a[j]);
                }
            }
        }
        for (int i = 0; i < p.size(); i++)
        {
            cout << p[i];
        }
        if(a[0] == '['){
            for (size_t i = 0; i < a.size(); i++)
            {
                if(a[i] == '[' || a[i] == ']'){}
                else cout << a[i];
            }
            break;
        }

        for (int i = 0; i < a.size(); i++)
        {
            if(i >= in && i <= j){}
            if(a[i] == '[' || a[i] == ']'){}
            else cout << a[i];
        }
        cout << endl;
        
    }
}