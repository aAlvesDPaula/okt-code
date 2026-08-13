#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int aux = 0;
        char l;
        set<char> b;
        for (int j = 0; j < m; j++)
        {
            cin >> l;
            if (b.empty())
            {
                b.insert(l);
                aux+=2;
            }
            else
            {
                if (b.count(l))
                {
                    aux++;
                }
                else
                {
                    b.insert(l);
                    aux += 2;
                }
            }
        }
        cout << aux << endl;
    }
}