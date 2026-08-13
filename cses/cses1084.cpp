#include <bits/stdc++.h>
using namespace std;
#define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     ll n, m, k, aux;
//     cin >> n >> m >> k;
//     vector<ll> ap, tam;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> aux;
//         ap.push_back(aux);
//     }
//     for (ll i = 0; i < m; i++)
//     {
//         cin >> aux;
//         tam.push_back(aux);
//     }
//     sort(ap.begin(), ap.end());
//     sort(tam.begin(), tam.end());
//     aux = 0;
//     for (ll r = 0, l = 0; r < m && l < n;)
//     {
//         if (ap[l] > tam[r] + k)
//             r++;
//         else if (ap[l] < tam[r] - k)
//             l++;
//         else
//         {
//             aux++;
//             r++;
//             l++;
//         }
//     }
//     cout << aux << endl;
// }

int main()
{
    int n, m, k;
    int aux;
    cin >> n >> m >> k;
    vector<int> d, ap;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        d.push_back(aux);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> aux;
        ap.push_back(aux);
    }

    sort(d.begin(), d.end());
    sort(ap.begin(), ap.end());

    aux = 0;
    for (int l = 0, r = 0; r < m && l < n;)
    {
        if (d[l] - ap[r] > k)
            r++;
        else if (d[l] < ap[r] - k)
            l++;
        else
        {
            r++;
            l++, aux++;
        }
    }
    cout << aux;
}