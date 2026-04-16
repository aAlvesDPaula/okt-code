#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m[3][3], aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; i++)
            cin >> m[i][j];
    }
    int count = 0, count2 = 0;aux4 = 0;
    for (int i = 0; i < 3; i++)
    {
        aux1 += m[0][i];
        aux2 += m[i][0];
        if (i == count)
        {
            aux3 += m[i][i];
            count++;
        }
        aux4+=m[i][2-i];
    }
    if (aux1 == aux)
    {
        if (true){
            if(true)
                cout <<  "SIM\n";
        }
            
    }
    else
        cout <<"NÃO\n";
}
//m[0][1] + m[1][1] + m[2][1] == aux1 && aux1 == m[1][0] + m[1][1] + m[1][2]
//aux4 == m[2][0]+m[2][1]+m[2][2] && aux1 == m[0][2] + m[1][2] + m[2][2]
