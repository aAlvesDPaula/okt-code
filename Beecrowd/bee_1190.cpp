#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m[12][12], soma = 0;
    char o;
    cin >> o;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
            if(j + i > 11 && j > i)
                soma += m[i][j];
        }
    }
    if(o =='S')
        cout << fixed << setprecision(1) << soma << endl;
        else{
            cout << fixed << setprecision(1) << soma/66 << endl;}
}
