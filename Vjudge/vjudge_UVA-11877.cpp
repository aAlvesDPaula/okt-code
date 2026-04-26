#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    while (cin >> g && g!=0)
    {
        int tBebidas = 0;
        while (g >= 3)
        {
            int garrafasSobras = g /3;
            tBebidas += garrafasSobras;
            g = (g%3) + garrafasSobras;
        }
        if(g == 2){
            tBebidas++;
        }
        cout << tBebidas << endl;
    }
}