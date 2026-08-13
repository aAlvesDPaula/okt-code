#include <bits/stdc++.h>
using namespace std;
int UVA(int a){
    if(a == 1)
        return 1;
    if(a == 2)
        return 2;
    else
        return (UVA(a-1) + UVA(a-2));
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int a;
    while(cin >> a){
        int res = UVA(a);
        cout << res << endl;
    }
    return 0;
}