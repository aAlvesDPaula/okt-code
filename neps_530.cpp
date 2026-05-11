#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, aux = 0;
    cin >> l;
    bool m[100][100] = {false};
    for (int i = 0; i < l; i++)
    {
        int xi,xf,yi,yf;
        cin >> xi >> xf >> yi >> yf;
        for (int j = xi; j < xf; j++)
        {
            for (int k = yi; k < yf; k++)
            {
                int v;
                if (m[j][k] == false)
                {
                    aux++;
                    m[j][k] = true;
                }
            }
        }
    }
    cout << aux;
}
