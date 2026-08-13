#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        auto max = max_element(v.begin(), v.end());
        auto min = min_element(v.begin(), v.end());

        cout << max - min + max - min << endl;
    }
    
}