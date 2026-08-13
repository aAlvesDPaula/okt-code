#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, a;
    cin >> n >> m;

    multiset<int, greater<int>> b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        b.insert(a);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        auto p = b.lower_bound(a);
        if (p == b.end())
            cout << -1 << "\n";
        else
        {
            cout << *p << "\n";
            b.erase(p);
        }
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    ll n , m, a;
    cin >> n >> m;
 
 
    multiset<int, greater<int>> b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        b.insert(a);
    }
    int aux = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        bool ver = true;
        for(auto it: b){
            if(it <= a){
                ver = false;
                aux = it;
                b.erase(it);
                break;
            }
        }
        if(ver)
            cout << -1 << endl;
            else
                cout << aux << endl;
            
    }
}*/