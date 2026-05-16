#include <bits/stdc++.h>
using namespace std;
typedef struct sorv
{
    int in, f;
    
}sorv;


int main(){
    int p, s;
    cin >> p >> s;
    vector<sorv> sor(s);
    for (int i = 0; i < s; i++)
    {
        int vi, vf;
        cin >> vi >> vf;
        sor[i].in = vi;
        sor[i].f = vf;
    }
    
    
    
    
}