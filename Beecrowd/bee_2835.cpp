#include <bits/stdc++.h>
using namespace std;
int main(){
    int tam;
    cin >> tam;
    vector<int> cx;
    for (int i = 0; i < tam; i++)
    {
        int n;
        cin >> n;
        cx.push_back(n);
    }
    sort(cx.begin(), cx.end());
    bool flag = true;
    for (int i = 1; i < cx.size(); i++)
    {
        if(cx[i] - cx[i-1] > 8){
            flag = false;
        }
    }
    if(cx.size() == 1){
        if(cx[0] <= 8){
            flag = true;
        }
        else
            flag = false; 
    }
    if(*cx.begin() > 8){
        flag = false;
    }
    if(flag)
        cout << 'S' << '\n';
        else
            cout << 'N' << '\n';
    
    return 0;
}
