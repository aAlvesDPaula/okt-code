#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    set<int> c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        c.insert(v);
    }
    cout << c.size();

}