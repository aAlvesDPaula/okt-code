#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, res = 0;
    list<int> p;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        if (n == 0 && !p.empty())
        {
            p.pop_back();
        }
        else
            p.push_back(n);
    }
    for (int i : p)
    {
        res+=i;
    }
    cout << res;
}