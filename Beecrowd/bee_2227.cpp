#include <bits/stdc++.h>
using namespace std;

struct areo
{
    int e = 0, s = 0;
};
bool ord(const areo &a, const areo &b)
{
    if (a.s == b.s)
    {
        return a.e < b.e;
    }

    return a.s > b.s;
}
int main()
{

    vector<areo> porto;
    bool flag = true;
    int in, en;
    while (cin >> in && cin >> en)
    {
        if (in != 0 && en != 0)
        {
            if (in = 1 && flag)
            {
                areo v;
                v.e = 1;
                v.s++;
                porto.push_back(v);
                cout << "Teste 1" << endl
                     << en << endl;
                flag = false;
            }
            else
            {
                bool real = false;
                for (int i = 0; i < porto.size(); i++)
                {
                    if (porto[i].e == in)
                    {
                        porto[i].s++;
                        real = true;
                        break;
                    }
                }
                if (!real)
                {
                    areo v;
                    v.e = in;
                    v.s = en;
                    porto.push_back(v);
                }
            }
        }
    }
    sort(porto.begin(), porto.end(), ord);

    for (size_t i = 0; i < porto.size(); i++)
    {
        if (porto[0].s == porto[i].s)
        {
            cout << porto[i].s;
        }
    }
}