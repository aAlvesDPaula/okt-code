#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin >> c;
    vector<int> bl;
    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        bl.push_back(n);
    }
    sort(bl.begin(), bl.end());
    bool flag = true;
    if(*bl.begin() > 8){
        flag = false;
    }
    for (int i = 1; i < bl.size(); i++)
    {
        if(bl[i] - bl[i-1] > 8){
            flag = false;
        }
    }
    if(flag){
        cout << 'S' << endl;
    }
    else{
        cout << 'N' << endl;
    }
}