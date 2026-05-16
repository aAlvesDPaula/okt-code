#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int k = 0; k < n ; k++)
    {
        string a, b;
        cin >> a;
        cin >> b;
        for (int i = 0; i < a.size() || i < b.size(); i++)
        {
            if (a.size() > i)
            {
                cout << a[i];
                
            }
            if (b.size() > i)
            {
               cout << b[i];
            }
        }
        cout << endl;
    }
}