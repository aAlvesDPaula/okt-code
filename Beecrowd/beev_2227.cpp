#include <bits/stdc++.h>
using namespace std;
struct aero
{
    int traf = 0;
};
bool m(aero &a, aero &b)
{
    return (a.traf > b.traf);
}
int main()
{
    int a, v, t = 1;
    while (cin >> a >> v && v != 0 && a != 0)
    {
        vector<aero> aerop(a);
        cout << "Teste " << t << endl;
        for (int i = 0; i < v; i++)
        {
            int vd, vp;
            cin >> vd >> vp;
            aerop[vd - 1].traf++;
            aerop[vp - 1].traf++;
            int maior = 0;
        }
        vector<aero> aeroaux;
        aeroaux = aerop;

        sort(aerop.begin(), aerop.end(), m);
        for (int i = 0; i < aeroaux.size(); i++)
        {
            if (aeroaux[i].traf == aerop[0].traf)
                cout << i + 1 << " ";
        }

        t++;
        cout << endl << endl;
    }
    return 0;
}