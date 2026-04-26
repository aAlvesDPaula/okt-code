#include <bits/stdc++.h>
using namespace std;
int acoes(int k, int n, int v){
    if(n > k/2){
        return acoes(k, n/2, v+1) + acoes(k, n/2, v+1);
    }
    else
        return(v);
}
int main(){
    int k, n;
    while (cin >> k >> n)
    {
        int v = 0;
        if(n == k && n==0){
            break;
        }
        int res = acoes(k, n, v);
        cout << res << endl;
    }
}