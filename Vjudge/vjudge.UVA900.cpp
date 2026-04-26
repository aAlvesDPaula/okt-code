#include <bits/stdc++.h>
using namespace std;
int UVA(int a){
    if(a == 0){}
    else
        return ((a*a)-((a-1)*2));
}
int main(){
    int a;
    while(cin >> a){
        int res = UVA(a);
        cout << res;
    }

}